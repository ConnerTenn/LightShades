
GPP=g++ -Wall -std=c++17
#LAUDIO=../libportaudio.a -lasound -ljack -pthread
#LMAD=../libmad/*.o 
LXTERMLIBS=-pthread -lgdk_pixbuf_xlib-2.0 -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfontconfig -lfreetype  -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfontconfig -lfreetype -lX11
#LPIXTERM=-L ../../PixelTerm -lPixelTerm $(LXTERMLIBS)
LIBS = -lpthread
CFLAGS = -O3 -D GRAPHICAL#-I ../libmad/ -I ../../PixelTerm

all: program

program: main.o Animations.o ShadesController.o WindowController.o Globals.o
	$(GPP) $(CFLAGS) $^ $(LIBS) $(LXTERMLIBS) -o $@
	
main.o: main.cpp ShadesController.h Globals.h
	$(GPP) $(CFLAGS) $< -c -o $@
	
Animations.o: Animations.cpp ShadesController.h Globals.h
	$(GPP) $(CFLAGS) $< -c -o $@
	
ShadesController.o: ShadesController.cpp ShadesController.h Globals.h
	$(GPP) $(CFLAGS) $< -c -o $@
	
WindowController.o: WindowController.cpp WindowController.h
	$(GPP) $(CFLAGS) $< -c -o $@
	
Globals.o: Globals.cpp Globals.h
	$(GPP) $(CFLAGS) $< -c -o $@
	
run: all
	@echo
	@./program

force: clean all

clean: 
	rm *.o program* -f
