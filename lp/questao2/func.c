#include "func.h"

int potencia(int x, int z){
	int i;
	int res=x;
	for(i=1;i<z;i++){
		res*=x;
	}
return res;
}
