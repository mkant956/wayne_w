#!/usr/bin/env python
# Software License Agreement (BSD License)
#
# Copyright (c) 2008, Willow Garage, Inc.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#  * Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#  * Redistributions in binary form must reproduce the above
#    copyright notice, this list of conditions and the following
#    disclaimer in the documentation and/or other materials provided
#    with the distribution.
#  * Neither the name of Willow Garage, Inc. nor the names of its
#    contributors may be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# Revision $Id$

## Simple talker demo that published std_msgs/Strings messages
## to the 'chatter' topic

import sys
import time
import re
import RPi.GPIO as GPIO

#GPIO Mode (BOARD / BCM)
GPIO.setmode(GPIO.BCM)

class Ultrasonic:
	

	#set GPIO Pins
	GPIO_TRIGGER = 19
	GPIO_ECHO = 26
	topic = 'topic'
	node = 'nodename'
#set GPIO direction (IN / OUT)
	
	
	def __init__(self,GPIO_TRIGGER, GPIO_ECHO,topicname ,  nodename):
		self.GPIO_TRIGGER = GPIO_TRIGGER
		self.GPIO_ECHO = GPIO_ECHO
		self.topic = topicname
		self.node=nodename
		GPIO.setup(GPIO_TRIGGER, GPIO.OUT)
		GPIO.setup(GPIO_ECHO, GPIO.IN)

	def distance(self):
	    # set Trigger to HIGH
	    GPIO.output(self.GPIO_TRIGGER, True)

	    # set Trigger after 0.01ms to LOW
	    time.sleep(0.00001)
	    GPIO.output(self.GPIO_TRIGGER, False)

	    StartTime = time.time()
	    StopTime = time.time()

	    # save StartTime
	    while GPIO.input(self.GPIO_ECHO) == 0:
		StartTime = time.time()

	    # save time of arrival
	    while GPIO.input(self.GPIO_ECHO) == 1:
	    	temp_d=StopTime-StartTime
	    	temp_d=(temp_d * 34300) / 2
	    	if(temp_d>80):
	    		break;
		StopTime = time.time()

	    # time difference between start and arrival
	    TimeElapsed = StopTime - StartTime
	    # multiply with the sonic speed (34300 cm/s)
	    # and divide by 2, because there and back
	    distance = (TimeElapsed * 34300) / 2
	    if(distance>80):
	    	distance=80

    	    return distance
