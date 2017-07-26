#include <stdio.h>
#include <time.h>
#include <math.h>

#define CST (-6)
#define NYC (-4)
#define PST (-8) //LA
#define Juneau (-9)
#define London (0)
#define Moscow (3)
#define Tokyo (9)
#define Ankara (3)
#define Sydney (10)
#define Wellington (12)
#define CET (1) //Amsterdam

int main(){


    // -A- ---------------------------------------------------------------------------

    time_t raw_time;
    struct tm *ptr_ts;

    // to get different timeZones
	time( &raw_time );
	ptr_ts = gmtime ( &raw_time );

    // Finding the time difference between Houston and

    // NYC
    int HouNYC = ( (ptr_ts -> tm_hour +NYC) - (ptr_ts -> tm_hour +CST) );
    if(HouNYC<0) HouNYC*=-1;
    printf("The time difference between Houston and NYC is: %2d hours.\n", HouNYC);
    // LA
    int HouLA = ( (ptr_ts -> tm_hour +PST) - (ptr_ts -> tm_hour +CST) );
    if(HouLA<0) HouLA*=-1;
    printf("The time difference between Houston and LA is: %2d hours.\n", HouLA);
    //Juneau
    int HouJuneau = abs( (ptr_ts -> tm_hour +Juneau) - (ptr_ts -> tm_hour +CST) );
    printf("The time difference between Houston and Juneau is: %2d hours.\n", HouJuneau);
    //London
    int HouLondon = abs( (ptr_ts -> tm_hour +London) - (ptr_ts -> tm_hour +CST) );
    printf("The time difference between Houston and London is: %2d hours.\n", HouLondon);
    //Moscow
    int HouMoscow = abs( (ptr_ts -> tm_hour +Moscow) - (ptr_ts -> tm_hour +CST) );
    printf("The time difference between Houston and Moscow is: %2d hours.\n", HouMoscow);
    //Tokyo
    int HouTokyo = abs( (ptr_ts -> tm_hour +Tokyo) - (ptr_ts -> tm_hour +CST) );
    printf("The time difference between Houston and Tokyo is: %2d hours.\n", HouTokyo);
    //Ankara
    int HouAnkara = abs( (ptr_ts -> tm_hour +Ankara) - (ptr_ts -> tm_hour +CST) );
    printf("The time difference between Houston and Ankara is: %2d hours.\n", HouAnkara);
    //Sydney
    int HouSydney = abs( (ptr_ts -> tm_hour +Sydney) - (ptr_ts -> tm_hour +CST) );
    printf("The time difference between Houston and Sydney is: %2d hours.\n", HouSydney);
    //Wellington
    int HouWellington = abs( (ptr_ts -> tm_hour +Wellington) - (ptr_ts -> tm_hour +CST) );
    printf("The time difference between Houston and Wellington is: %2d hours.\n\n", HouWellington);


    // -B- ----------------------------------------------------------------- -B- ------------------ -B- -----------------
    int timeDiff[] = {HouNYC, HouLA, HouJuneau, HouLondon, HouMoscow, HouTokyo, HouAnkara, HouSydney, HouWellington};
    char *places[9] = {"NYC", "LA", "Juneau", "London", "Moscow","Tokyo","Ankara", "Sydney","Wellington"};

    int i;
    for(i=0; i<9; i++){
        if(timeDiff[i]<6)
            printf("It is appropriate to call %s at 12 Noon CST. Your time difference is %d hours.\n", places[i], timeDiff[i]);
        else
            printf("It is INAPPROPRIATE to call %s at 12 Noon CST. Why you callin' someone %d hours away?\n",places[i],timeDiff[i]);
    }

    printf("\n\n%p", &main);
    printf("\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p", &HouNYC,&HouLA,&HouJuneau,&HouLondon,&HouMoscow, &HouTokyo,&HouAnkara,&HouSydney,&HouWellington);

    return 0;
}
