# Simple Arc Clock

Simple desktop clock that is easy to configure. Left mouse drags the clock around the desktop, right mouse opens menu. Depending on your window manager alt+right mouse resizes.  
![Screenshot](sac.png)
### Installation
```
sudo ./install.sh
```
A menu entry should appear under Utilities.
### Compton
To avoid shadows edit your compton.conf thus:
```
shadow-exclude = [
	"name = 'Notification'",
	"class_g = 'Conky'",
	"class_g = 'arcclock'",
	"class_g ?= 'Notify-osd'",
	...
```
