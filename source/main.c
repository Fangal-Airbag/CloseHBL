#include <coreinit/thread.h>
#include <coreinit/time.h>
#include <coreinit/exit.h>
#include <sysapp/launch.h>
#include <whb/log.h>
#include <whb/proc.h>

int main(int argc, char** argv)
{
	WHBProcInit();

	SYSLaunchMenu();

	while (WHBProcIsRunning())
	{
		OSSleepTicks(OSMillisecondsToTicks(100));
	}

	WHBProcStopRunning();
	_Exit(0);

	return 0;
}