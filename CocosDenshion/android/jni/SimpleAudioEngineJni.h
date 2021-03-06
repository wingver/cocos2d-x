#ifndef __SIMPLE_AUDIO_ENGINE_JNI__
#define __SIMPLE_AUDIO_ENGINE_JNI__

#include <jni.h>

extern "C"
{
    extern void playBackgroundMusicJNI(const char *path, bool isLoop);
	extern void stopBackgroundMusicJNI();
	extern void pauseBackgroundMusicJNI();
	extern void resumeBackgroundMusicJNI();
	extern void rewindBackgroundMusicJNI();
	extern bool isBackgroundMusicPlayingJNI();
	extern float getBackgroundMusicVolumeJNI();
	extern void setBackgroundMusicVolumeJNI(float volume);
	extern unsigned int playEffectJNI(const char* path);
	extern void stopEffectJNI(unsigned int nSoundId);
	extern void endJNI();
	extern float getEffectsVolumeJNI();
	extern void setEffectsVolumeJNI(float volume);
	extern void preloadEffectJNI(const char *path);
	extern void unloadEffectJNI(const char* path);
}

#endif // __SIMPLE_AUDIO_ENGINE_JNI__