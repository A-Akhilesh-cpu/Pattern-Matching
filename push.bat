@echo off
echo ===============================
echo Auto pushing changes to GitHub
echo ===============================

git add .
git commit -m "Auto update"
git push

echo ===============================
echo Done!
echo ===============================
pause
