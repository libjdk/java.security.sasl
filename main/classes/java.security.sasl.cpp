#include <java.security.sasl.h>

#include <java.base.h>
#include <java.logging.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <com/sun/security/sasl/ClientFactoryImpl.h>
#include <com/sun/security/sasl/CramMD5Base.h>
#include <com/sun/security/sasl/CramMD5Client.h>
#include <com/sun/security/sasl/CramMD5Server.h>
#include <com/sun/security/sasl/ExternalClient.h>
#include <com/sun/security/sasl/PlainClient.h>
#include <com/sun/security/sasl/Provider.h>
#include <com/sun/security/sasl/Provider$1.h>
#include <com/sun/security/sasl/Provider$ProviderService.h>
#include <com/sun/security/sasl/ServerFactoryImpl.h>
#include <com/sun/security/sasl/digest/DigestMD5Base.h>
#include <com/sun/security/sasl/digest/DigestMD5Base$DigestIntegrity.h>
#include <com/sun/security/sasl/digest/DigestMD5Base$DigestPrivacy.h>
#include <com/sun/security/sasl/digest/DigestMD5Client.h>
#include <com/sun/security/sasl/digest/DigestMD5Server.h>
#include <com/sun/security/sasl/digest/FactoryImpl.h>
#include <com/sun/security/sasl/digest/SecurityCtx.h>
#include <com/sun/security/sasl/ntlm/FactoryImpl.h>
#include <com/sun/security/sasl/ntlm/NTLMClient.h>
#include <com/sun/security/sasl/ntlm/NTLMServer.h>
#include <com/sun/security/sasl/ntlm/NTLMServer$1.h>
#include <com/sun/security/sasl/util/AbstractSaslImpl.h>
#include <com/sun/security/sasl/util/PolicyUtils.h>
#include <javax/security/sasl/AuthenticationException.h>
#include <javax/security/sasl/AuthorizeCallback.h>
#include <javax/security/sasl/RealmCallback.h>
#include <javax/security/sasl/RealmChoiceCallback.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/Sasl$1.h>
#include <javax/security/sasl/Sasl$2.h>
#include <javax/security/sasl/SaslClient.h>
#include <javax/security/sasl/SaslClientFactory.h>
#include <javax/security/sasl/SaslException.h>
#include <javax/security/sasl/SaslServer.h>
#include <javax/security/sasl/SaslServerFactory.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$security$sasl_classes_[] = {
	$classEntry("com.sun.security.sasl.ClientFactoryImpl", ::com::sun::security::sasl::ClientFactoryImpl),
	$classEntry("com.sun.security.sasl.CramMD5Base", ::com::sun::security::sasl::CramMD5Base),
	$classEntry("com.sun.security.sasl.CramMD5Client", ::com::sun::security::sasl::CramMD5Client),
	$classEntry("com.sun.security.sasl.CramMD5Server", ::com::sun::security::sasl::CramMD5Server),
	$classEntry("com.sun.security.sasl.ExternalClient", ::com::sun::security::sasl::ExternalClient),
	$classEntry("com.sun.security.sasl.PlainClient", ::com::sun::security::sasl::PlainClient),
	$classEntry("com.sun.security.sasl.Provider", ::com::sun::security::sasl::Provider),
	$classEntry("com.sun.security.sasl.Provider$1", ::com::sun::security::sasl::Provider$1),
	$classEntry("com.sun.security.sasl.Provider$ProviderService", ::com::sun::security::sasl::Provider$ProviderService),
	$classEntry("com.sun.security.sasl.ServerFactoryImpl", ::com::sun::security::sasl::ServerFactoryImpl),
	$classEntry("com.sun.security.sasl.digest.DigestMD5Base", ::com::sun::security::sasl::digest::DigestMD5Base),
	$classEntry("com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity", ::com::sun::security::sasl::digest::DigestMD5Base$DigestIntegrity),
	$classEntry("com.sun.security.sasl.digest.DigestMD5Base$DigestPrivacy", ::com::sun::security::sasl::digest::DigestMD5Base$DigestPrivacy),
	$classEntry("com.sun.security.sasl.digest.DigestMD5Client", ::com::sun::security::sasl::digest::DigestMD5Client),
	$classEntry("com.sun.security.sasl.digest.DigestMD5Server", ::com::sun::security::sasl::digest::DigestMD5Server),
	$classEntry("com.sun.security.sasl.digest.FactoryImpl", ::com::sun::security::sasl::digest::FactoryImpl),
	$classEntry("com.sun.security.sasl.digest.SecurityCtx", ::com::sun::security::sasl::digest::SecurityCtx),
	$classEntry("com.sun.security.sasl.ntlm.FactoryImpl", ::com::sun::security::sasl::ntlm::FactoryImpl),
	$classEntry("com.sun.security.sasl.ntlm.NTLMClient", ::com::sun::security::sasl::ntlm::NTLMClient),
	$classEntry("com.sun.security.sasl.ntlm.NTLMServer", ::com::sun::security::sasl::ntlm::NTLMServer),
	$classEntry("com.sun.security.sasl.ntlm.NTLMServer$1", ::com::sun::security::sasl::ntlm::NTLMServer$1),
	$classEntry("com.sun.security.sasl.util.AbstractSaslImpl", ::com::sun::security::sasl::util::AbstractSaslImpl),
	$classEntry("com.sun.security.sasl.util.PolicyUtils", ::com::sun::security::sasl::util::PolicyUtils),
	$classEntry("javax.security.sasl.AuthenticationException", ::javax::security::sasl::AuthenticationException),
	$classEntry("javax.security.sasl.AuthorizeCallback", ::javax::security::sasl::AuthorizeCallback),
	$classEntry("javax.security.sasl.RealmCallback", ::javax::security::sasl::RealmCallback),
	$classEntry("javax.security.sasl.RealmChoiceCallback", ::javax::security::sasl::RealmChoiceCallback),
	$classEntry("javax.security.sasl.Sasl", ::javax::security::sasl::Sasl),
	$classEntry("javax.security.sasl.Sasl$1", ::javax::security::sasl::Sasl$1),
	$classEntry("javax.security.sasl.Sasl$2", ::javax::security::sasl::Sasl$2),
	$classEntry("javax.security.sasl.SaslClient", ::javax::security::sasl::SaslClient),
	$classEntry("javax.security.sasl.SaslClientFactory", ::javax::security::sasl::SaslClientFactory),
	$classEntry("javax.security.sasl.SaslException", ::javax::security::sasl::SaslException),
	$classEntry("javax.security.sasl.SaslServer", ::javax::security::sasl::SaslServer),
	$classEntry("javax.security.sasl.SaslServerFactory", ::javax::security::sasl::SaslServerFactory)
};

const char* _java$security$sasl_packages_[] = {
	"com.sun.security.sasl",
	"com.sun.security.sasl.digest",
	"com.sun.security.sasl.ntlm",
	"com.sun.security.sasl.util",
	"javax.security.sasl"
};

void java$security$sasl$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$security$sasl_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$security$sasl_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$security$sasl$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$security$sasl$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$security$sasl$GetPackages() {
	int32_t length = $lengthOf(_java$security$sasl_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$security$sasl_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$security$sasl$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$security$sasl_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$security$sasl_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$security$sasl$GetResource($String* name) {
	return nullptr;
}

void java$security$sasl::init() {
	::java$base::init();
	::java$logging::init();
	::java::lang::Library lib = {
		"java.security.sasl", "17.35", "",
		&_java$security$sasl_ModuleInfo_,
		java$security$sasl$LibEventAction,
		java$security$sasl$GetPackages,
		java$security$sasl$GetClassEntry,
		java$security$sasl$GetResource
	};
	$System::addLibrary(&lib);
}