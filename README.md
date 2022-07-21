# Face-recognition-and-RFID-based-attendance-management-system
It is a Hardware and Software based Project



project exustion steps
Our project uses virtual Environment so install that,

python version-Python 3.7.2 IDE
 
open XAMPP on(apache and My SQL Start)
open command prompt at file location enter the command
venv\Scripts\active

cd ImageProcessing
Python read_Serial.py

To Create dataset:
python dataset_creator.py

To train the dataset
python trainer.py

To Get result on Website we need to open again,
venv\Scripts\active

cd AttendanceManagement

python manage.py runserver

then will get a localhost link like http://127.0.0.1:8000/
Then paste it in browser and make sure the xampp is on 



