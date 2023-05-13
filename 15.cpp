#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int n=9, head_pos=50, curr_track, head_movement=0, i;
 int tracks[] = {55, 58, 60, 70, 18, 90, 150, 160, 184};
 printf("Track sequence: ");
 for(i=0; i<n; i++)
 printf("%d ", tracks[i]);
 printf("\n\nFCFS Disk Scheduling Algorithm:\n");
 printf("Current Head Position: %d\n", head_pos);
 for(i=0; i<n; i++)
 {
 curr_track = tracks[i];
 head_movement += abs(head_pos - curr_track);
 head_pos = curr_track;
 printf("Move to Track %d\n", curr_track);
 }
 printf("\nTotal Head Movement: %d\n", head_movement);
 printf("Average Head Movement: %.2f\n", (float)head_movement/n);
}
