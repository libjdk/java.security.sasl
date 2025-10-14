#include <javax/security/sasl/SaslServerFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/SaslServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $SaslServer = ::javax::security::sasl::SaslServer;

namespace javax {
	namespace security {
		namespace sasl {

$MethodInfo _SaslServerFactory_MethodInfo_[] = {
	{"createSaslServer", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"getMechanismNames", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SaslServerFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.sasl.SaslServerFactory",
	nullptr,
	nullptr,
	nullptr,
	_SaslServerFactory_MethodInfo_
};

$Object* allocate$SaslServerFactory($Class* clazz) {
	return $of($alloc(SaslServerFactory));
}

$Class* SaslServerFactory::load$($String* name, bool initialize) {
	$loadClass(SaslServerFactory, name, initialize, &_SaslServerFactory_ClassInfo_, allocate$SaslServerFactory);
	return class$;
}

$Class* SaslServerFactory::class$ = nullptr;

		} // sasl
	} // security
} // javax