#ifndef DRV_WII_
#define DRV_WII_

// I have no idea why renderSamples is here, nor what it might be used for
// in the future ...but this is just to fix the compiler warning
void setBuffer(int16_t *buffer, int renderSamples);

#endif //DRV_WII_
