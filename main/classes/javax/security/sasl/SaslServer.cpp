#include <javax/security/sasl/SaslServer.h>

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

$MethodInfo _SaslServer_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"evaluateResponse", "([B)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"getAuthorizationID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isComplete", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _SaslServer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.sasl.SaslServer",
	nullptr,
	nullptr,
	nullptr,
	_SaslServer_MethodInfo_
};

$Object* allocate$SaslServer($Class* clazz) {
	return $of($alloc(SaslServer));
}

$Class* SaslServer::load$($String* name, bool initialize) {
	$loadClass(SaslServer, name, initialize, &_SaslServer_ClassInfo_, allocate$SaslServer);
	return class$;
}

$Class* SaslServer::class$ = nullptr;

		} // sasl
	} // security
} // javax