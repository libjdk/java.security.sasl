#include <com/sun/security/sasl/Provider.h>

#include <com/sun/security/sasl/Provider$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef PROVIDER_VER

using $Provider$1 = ::com::sun::security::sasl::Provider$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _Provider_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Provider, serialVersionUID)},
	{"info", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Provider, info)},
	{}
};

$MethodInfo _Provider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Provider::*)()>(&Provider::init$))},
	{"access$000", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$000))},
	{"access$100", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$100))},
	{"access$200", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$200))},
	{"access$300", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$300))},
	{"access$400", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$400))},
	{"access$500", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$500))},
	{"access$600", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$600))},
	{"access$700", "(Lcom/sun/security/sasl/Provider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Provider*,$Provider$Service*)>(&Provider::access$700))},
	{}
};

$InnerClassInfo _Provider_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.Provider$ProviderService", "com.sun.security.sasl.Provider", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.security.sasl.Provider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Provider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.security.sasl.Provider",
	"java.security.Provider",
	nullptr,
	_Provider_FieldInfo_,
	_Provider_MethodInfo_,
	nullptr,
	nullptr,
	_Provider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.security.sasl.Provider$ProviderService,com.sun.security.sasl.Provider$1"
};

$Object* allocate$Provider($Class* clazz) {
	return $of($alloc(Provider));
}

$String* Provider::info = nullptr;

void Provider::access$700(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::access$600(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::access$500(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::access$400(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::access$300(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::access$200(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::access$100(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::access$000(Provider* x0, $Provider$Service* x1) {
	$init(Provider);
	$nc(x0)->putService(x1);
}

void Provider::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("SunSASL"_s, $SecurityConstants::PROVIDER_VER, Provider::info);
	$var(Provider, p, this);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Provider$1, this, p)));
}

Provider::Provider() {
}

void clinit$Provider($Class* class$) {
	$assignStatic(Provider::info, "Sun SASL provider(implements client mechanisms for: DIGEST-MD5, EXTERNAL, PLAIN, CRAM-MD5, NTLM; server mechanisms for: DIGEST-MD5, CRAM-MD5, NTLM)"_s);
}

$Class* Provider::load$($String* name, bool initialize) {
	$loadClass(Provider, name, initialize, &_Provider_ClassInfo_, clinit$Provider, allocate$Provider);
	return class$;
}

$Class* Provider::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com