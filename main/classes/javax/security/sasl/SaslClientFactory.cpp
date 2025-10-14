#include <javax/security/sasl/SaslClientFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/SaslClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $SaslClient = ::javax::security::sasl::SaslClient;

namespace javax {
	namespace security {
		namespace sasl {

$MethodInfo _SaslClientFactory_MethodInfo_[] = {
	{"createSaslClient", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"getMechanismNames", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SaslClientFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.sasl.SaslClientFactory",
	nullptr,
	nullptr,
	nullptr,
	_SaslClientFactory_MethodInfo_
};

$Object* allocate$SaslClientFactory($Class* clazz) {
	return $of($alloc(SaslClientFactory));
}

$Class* SaslClientFactory::load$($String* name, bool initialize) {
	$loadClass(SaslClientFactory, name, initialize, &_SaslClientFactory_ClassInfo_, allocate$SaslClientFactory);
	return class$;
}

$Class* SaslClientFactory::class$ = nullptr;

		} // sasl
	} // security
} // javax