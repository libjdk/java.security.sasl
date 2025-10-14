#include <javax/security/sasl/SaslClient.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace sasl {

$MethodInfo _SaslClient_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"evaluateChallenge", "([B)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasInitialResponse", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isComplete", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _SaslClient_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.sasl.SaslClient",
	nullptr,
	nullptr,
	nullptr,
	_SaslClient_MethodInfo_
};

$Object* allocate$SaslClient($Class* clazz) {
	return $of($alloc(SaslClient));
}

$Class* SaslClient::load$($String* name, bool initialize) {
	$loadClass(SaslClient, name, initialize, &_SaslClient_ClassInfo_, allocate$SaslClient);
	return class$;
}

$Class* SaslClient::class$ = nullptr;

		} // sasl
	} // security
} // javax