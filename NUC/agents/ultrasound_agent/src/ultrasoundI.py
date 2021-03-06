#
#    Copyright (C) 2022 by YOUR NAME HERE
#
#    This file is part of RoboComp
#
#    RoboComp is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    RoboComp is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with RoboComp.  If not, see <http://www.gnu.org/licenses/>.
#

import sys, os, Ice

ROBOCOMP = ''
try:
    ROBOCOMP = os.environ['ROBOCOMP']
except:
    print('$ROBOCOMP environment variable not set, using the default value /opt/robocomp')
    ROBOCOMP = '/opt/robocomp'
if len(ROBOCOMP)<1:
    raise RuntimeError('ROBOCOMP environment variable not set! Exiting.')


Ice.loadSlice("-I ./src/ --all ./src/Ultrasound.ice")

from RoboCompUltrasound import *

class UltrasoundI(Ultrasound):
    def __init__(self, worker):
        self.worker = worker


    def getAllSensorDistances(self, c):
        return self.worker.Ultrasound_getAllSensorDistances()

    def getAllSensorParams(self, c):
        return self.worker.Ultrasound_getAllSensorParams()

    def getAllSonarPose(self, c):
        return self.worker.Ultrasound_getAllSonarPose()

    def getBusParams(self, c):
        return self.worker.Ultrasound_getBusParams()

    def getSensorDistance(self, sensor, c):
        return self.worker.Ultrasound_getSensorDistance(sensor)

    def getSensorParams(self, sensor, c):
        return self.worker.Ultrasound_getSensorParams(sensor)

    def getSonarsNumber(self, c):
        return self.worker.Ultrasound_getSonarsNumber()
