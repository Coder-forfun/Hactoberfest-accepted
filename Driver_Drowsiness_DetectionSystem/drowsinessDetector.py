import face_recognition
import time
import cv2
from scipy.spatial import distance as dist
import playsound
from threading import Thread
import numpy as np

# eye aspect ratio
MIN_EAR=0.30
# Min frames passed with eyes closed
EYE_AR_CONSEC_FRAMES=10

COUNTER=0
ALARM_ON=False
# defining a function to determins eye aspect ratio
def eye_aspect_ratio(eye):
    A=dist.euclidean(eye[1],eye[5])
    B=dist.euclidean(eye[2],eye[4])
    C=dist.euclidean(eye[0],eye[3])
    ear=(A+B)/(2*C)
    return ear

def main():
    global COUNTER,ALARM_ON
    # Capturing video fro web camera
    video_capture=cv2.VideoCapture(0)

    # Resizing the video captured
    video_capture.set(3,320)
    video_capture.set(4,240)

    while True:
        ret,frame = video_capture.read()
        # Maping the fetched image with face recognition and extrating facial landmarks
        face_landmarks_list=face_recognition.face_landmarks(frame)
        # from the face landmarks list fetching the required area of eye in form of 6 key
        # coordinates
        for face_landmark in face_landmarks_list:
            leftEye = face_landmark["left_eye"]
            rightEye= face_landmark["right_eye"]

            # Passing the fetched 6 eye coordinates through eye aspect ratio funcion
            # to determine the eye aspect ratio of each eye individually
            leftEAR= eye_aspect_ratio(leftEye)
            rightEAR= eye_aspect_ratio(rightEye)

            ear=(leftEAR+rightEAR)/2




