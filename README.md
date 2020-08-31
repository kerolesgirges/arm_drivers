# arm drivers- according to imt course 
## contant of folders 

## 1-lib 
contans common macros and standured types files 
these two files help us for programing for avr or stm32 
## 2-mcal 
contns project files 
### 2-1-driver_name_private file.h 
this file which contans regestes addreses in stm32 and this file is not allowed for user to modefy
### 2-2-driver_name_interface.h 
this file contans code that user may use in your driver like prototype and defines 
### 2-3-driver_name_config.h
contans all poseipole chises for user to modifi to run its driver 
### 2-4-2-3-driver_name_program.c
contans qll functions of my driver 
## 3-hal 
> not yet 
## 4-APP
contans main.c the main code for running 
