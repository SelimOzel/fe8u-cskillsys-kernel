#ifndef CONFIG_DEBUG_H
#define CONFIG_DEBUG_H

/* Basic switch to debug */
#define CONFIG_USE_DEBUG

#ifdef CONFIG_USE_DEBUG
	/* Enable a skill anim at all time */
	// #define CONFIG_DEBUG_EFXSKILL

	/* Auto load 254 skills on loading unit */
	// #define CONFIG_DEBUG_UNIT_LOAD_SKILL

	/* Test forcefully display popup rework */
	// #define CONFIG_DEBUG_POPR

	#define CONFIG_DEBUG_CHAPTER

	/* Add a dummy task to test thread scheduler */
	#define CONFIG_DEBUG_THREAD_SCHEDULER
	// #define CONFIG_DEBUG_DUMP_THREAD_STACK
#endif /* CONFIG_USE_DEBUG */

/**
 * Stand alone debug relatedconfigs
 */

// Enable MGBA printf
#define CONFIG_MGBA_PRINTF_EN 0

// Always print error log
#define CONFIG_FORCE_PRIENT_ERROR 1

// Show warnning log when using generic buffer
#define CONFIG_DEBUG_ON_USING_GENERIC_BUFFER 1
#define CONFIG_DEBUG_ABORT_ON_ERROR_USING_GENERIC_BUFFER 1

#endif /* CONFIG_DEBUG_H */
