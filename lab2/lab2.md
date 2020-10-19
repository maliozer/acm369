**ACM 370 LABORATORY 2 LINUX COMMAND LINE**

In Windows, the command line is almost never used. UNIX tradition relies heavily on the command line.

1.  The first three sections of the lab will be conducted by teams of two students however reports will be individual, joint reports will not be accepted. Set up your bios so that your computer boots from the FEDORA USB or virtual machine. In the boot menu select Live CD. When prompted, enter the Turkish Q keyboard.
    
2.  When the Graphical User Interface appears, enter (PC button in the position of the Win start menu) More Applications, Terminals, Konsole-Root. The password is root. Now you have administrator privileges.
    
3.  Try the following command sequence by typing the following commands in order. This illustrates command line navigation.
    
    1.  cd
        
    2.  pwd
        
    3.  ls
        
    4.  ls -al
        
    5.  cd .
        
    6.  pwd     (where did that get you?)
        
    7.  cd ..
        
    8.  pwd
        
    9.  ls -al
        
    10. cd ..
        
    11. pwd
        
    12. ls -al
        
    13. cd ..
        
    14. pwd     (what happens now)
        
    15. cd /etc
        
    16. ls -al | more
        
    17. cat passwd
        
    18. cd -
        
    19. pwd
        
4.  AVAILABLE EDITORS: A full screen text editor is a must. UNIX tradition involves the visual editor vi, which is not user friendly and emacs which is cumbersome. Other editors are jed, joe, pico, nano kedit, kate. Type the commands to start these editors and see which one is available without installing a new package If necessary install **nano** by typing sudo dnf install nano if it isn’t available..
    
5.  THE MIDNIGHT COMMANDER: is a clone of the Norton commander windows shell. Type mc on the command shell. Note the functions of the various F keys, for example F3 views a file, F4 edits it. You will need to install it by typing sudo dnf install mc.
    
6.  NOTES ON DOCUMENTATION: Help is available by typing man commandname or info commandname or commandname --help. Now navigate to the directory /usr/share/doc to see what documentation is available. Now learn what the following commands do by typing the command. If you are lost, ask for help as described above. Some of these commands will need a file, in that case create one as described above. For example, you can find out what uname does by using the command "man uname" and "uname --help". For a more detailed manual, you have to use "info coreutils uname" since uname forms part of the oreutils package. Some commands will require that you prepare a file or directory. Prepare the file using the available text editor nano. Note that some of these commands require care.
    
    1.  echo hello world<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    2.  passwd<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    3.  date<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    4.  hostname<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    5.  arch<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    6.  uname -a<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    7.  dmesg | more<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">(you may need to press q to quit)
        
    8.  uptime<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    9.  whoami<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    10. who<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    11. id<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    12. last<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    13. finger<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    14. w<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    15. top<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv"> (you may need to press q to quit)
        
    16. echo $SHELL<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    17. echo {con,pre}{sent,fer}{s,ed}<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    18. man "automatic door"<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    19. man ls<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv"> (you may need to press q to quit)
        
    20. man who<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv"> (you may need to press q to quit)
        
    21. echo \`who can tell me why i got divorced\`<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    22. last<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    23. clear<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    24. cal 2000
        
    25. cal 9 1752<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">(do you notice anything unusual?)
        
    26. bc -l<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">(type quit<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv"> or press Ctrl-d to quit)
        
    27. echo 5+4 | bc -l<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    28. yes please<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">(you may need to press Ctrl-c to quit)
        
    29. time sleep 5<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    30. history<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    31. wc <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    32. finger <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    33. df <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    34. more <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    35. cat <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    36. rm <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    37. rm –Rf <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    38. head –n file <img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    39. tail –n file<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
    40. sort –n file<img alt="enter" src="https://lh6.googleusercontent.com/gCYCHMLgzMlyS57HOnvPNJJGbXuwNClQr1XOXMK20z9GNjF1BAgYkVlaIB7pi3Okel6BM19yrIHbPiKustgGLAN0zfKXANkIdi2ri-7ajuhqtgglzaBaCz6v6BDqmp0vbyej5fQ" width="27" height="15" style="margin-left: 0px; margin-top: 0px;" class="jop-noMdConv">
        
7.  REDIRECTION AND APPENDING: The command program prog>file redirects the program output to the file, erasing its old contents while prog>> file appends the output to the file. Use the following commands. Examine the contents of file1 after each step.
    

cal 1980 > file1

cal 1981 >> file1

less file1

Verify that you can append one text file to another by  doing cat file1 file2 > file12.

8.  PIPING: Unix allows you to connect processes, by letting the standard output of one process feed into the standard input of another process. That mechanism is called a pipe. Example: Using the more command, and a pipe, you can manage the screen presentation of command output. For example, to route the output of command 1 as input to command2 we use command1 | command2.  Using the more command, and a pipe, you can manage the screen presentation of command output. Examine the contents of the /etc directory by typing ls -l /etc | more.
    
9.  FILENAME EXPANSION AND WILDCARDS (Pattern Matching): To save time in commands and to refer to several files in one statement, Linux provides special characters (? and *) known as wildcards or metacharacters.  Question mark (?) stands for any single character and asteriks (*) stands for any string of character.  Examples: ls ab?  :matches 3 character filenames begin with "ab". ls ab* : matches  filenames begin with "ab".
    

Exercises: a) List the files with 3-character filenames. b) Remove the files with filenames begining  with a and ending with z.  c) List all c files. d) List only hidden files.

Another way to do filename substitution is by matching on character sets. A character set is any number of single alphanumeric characters enclosed in square brackets-\[ and \].

Examples: \[ab\]c : matches ac and bc , ab\[1-8\]: matches ab1, ab2,...ab8

Exercise:  Interpret the patterns  a. *\[0-9\]* b. \[p-tz\]?? c. \[A-Z\]*

Exercise: List files with "o" or "c" extension.

10. COMPILING AND RUNNING C PROGRAMS: (Note that the first six exercises can be done using any bootable Linux distro such as Mageia live or Fedora live.) The C compiler is usually gcc, it accepts C language source files using extension .c. Run Kernighan-Ritchie's first example by entering these lines into a file with extension .c using the editor nano.

#include &lt;stdio.h&gt;

int main() {

        printf("Hello World\\n");

        return 0;

}

Compile the c file using gcc

`gcc hello.c -o a.outgcc hello.c -o a.out`

Compile the file using gcc filename. Run your program using ./a.out.

Then run the second example.

#include &lt;stdio.h&gt;

   /\* Print Fahrenheit Celsius Table for fahr=0,20,...300 */

   int main() {

      int fahr, celsius;

      int lower, upper, step;

      lower = 0;

      upper = 300;

      step = 20;

      fahr = lower;

      while (fahr <= upper) {

        celsius = 5 * (fahr - 32) / 9;

        printf("%d\\t%d\\n", fahr, celsius);

        fahr = fahr + step;

      }

      return 0;

    }

Then;

`gcc fahrenheit.c -o b.out`

Run the files with 

`./a.out`

`./b.out`
