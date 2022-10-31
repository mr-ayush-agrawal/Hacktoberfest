import pyautogui,time
time.sleep(3)
source_file = open("src.txt",'r')
for words in source_file:
    pyautogui.typewrite(words)
    pyautogui.press("enter")
