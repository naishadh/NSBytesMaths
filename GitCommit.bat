set /p commitComments=Enter commit comments:%=%
git status
git add * --ignore-errors
git commit -m "%commitComments%"
git push origin master

