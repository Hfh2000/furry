#include <log.h>
#include <init.h>

int main(){
	init();
	while(1){
		write();
		sleep_ms(1000);
	}
}

