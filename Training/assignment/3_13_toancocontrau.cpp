#include "stdio.h"

main(){
	int td,tn,tg;
	for (td = 1; td < 100; td++){
		for (tn = 1; tn < 100; tn++){
			for (tg = 1; tg < 100; tg++){
				if (td*5+tn*3+tg*1.0/3==100 && td+tg+tn==100)
					printf("%d trau dung, %d trau nam, %d trau gia\n", td, tn, tg);
			}
		}
	}
}
