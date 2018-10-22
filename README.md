# Simple Arc Clock

Simple desktop clock that is easy to configure. Left mouse drags the clock around the desktop, right mouse opens menu.
![Screenshot](sac.png)
### Installation
```
qmake
make
sudo make install
```
A menu entry should appear under Utilities.
   
After first start it creates a configuration file in./config/ArcClock/.
If problems occur or after an update it may need to be deleted.

### Compton (untested)
To avoid shadows edit your compton.conf thus:
```
shadow-exclude = [
	"name = 'Notification'",
	"class_g = 'Conky'",
	"class_g = 'arcclock2'",
	"class_g ?= 'Notify-osd'",
	...
```
