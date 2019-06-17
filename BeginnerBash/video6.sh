#Alex Shelton
#Bash For Beginners #6


#==========================
# Program: Case Statements
#==========================
#!/usr/bin/env bash


read -p "Are you 16 or over? y/n: " age

case "$age" in
  [Y/y] | [Y/e][E/e][S/s])
  echo "Congrats you can drive"
  ;; #Each case ends with ';;'

  [N/n] | [N/n][O/o])
  echo "Sorry you cannot drive :( "
  ;;# Ends with these

  *)
  echo "Please enter y/n"
esac
