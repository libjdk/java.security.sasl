#include <java.security.sasl.test.h>

#include <java.security.sasl.h>
#include <java.base.h>
#include <java.logging.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$security$sasl$test$PreloadClass(void* eventData) {
}

void java$security$sasl$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$security$sasl$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$security$sasl$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$security$sasl$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$security$sasl$test$GetResource($String* name) {
	return nullptr;
}

void java$security$sasl$test::init() {
	::java$security$sasl::init();
	::java$base::init();
	::java$logging::init();
	::java::lang::Library lib = {
		"java.security.sasl.test", "17.35", "",
		nullptr,
		java$security$sasl$test$LibEventAction,
		java$security$sasl$test$GetPackages,
		java$security$sasl$test$GetClassEntry,
		java$security$sasl$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}