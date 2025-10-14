#include <com/sun/security/sasl/ServerFactoryImpl.h>

#include <com/sun/security/sasl/CramMD5Server.h>
#include <com/sun/security/sasl/util/PolicyUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/SaslException.h>
#include <javax/security/sasl/SaslServer.h>
#include <jcpp.h>

#undef CRAMMD5
#undef NOANONYMOUS
#undef NOPLAINTEXT

using $CramMD5Server = ::com::sun::security::sasl::CramMD5Server;
using $PolicyUtils = ::com::sun::security::sasl::util::PolicyUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $SaslException = ::javax::security::sasl::SaslException;
using $SaslServer = ::javax::security::sasl::SaslServer;
using $SaslServerFactory = ::javax::security::sasl::SaslServerFactory;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _ServerFactoryImpl_FieldInfo_[] = {
	{"myMechs", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServerFactoryImpl, myMechs)},
	{"mechPolicies", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServerFactoryImpl, mechPolicies)},
	{"CRAMMD5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerFactoryImpl, CRAMMD5)},
	{}
};

$MethodInfo _ServerFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ServerFactoryImpl::*)()>(&ServerFactoryImpl::init$))},
	{"createSaslServer", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"getMechanismNames", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC},
	{}
};

$ClassInfo _ServerFactoryImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.security.sasl.ServerFactoryImpl",
	"java.lang.Object",
	"javax.security.sasl.SaslServerFactory",
	_ServerFactoryImpl_FieldInfo_,
	_ServerFactoryImpl_MethodInfo_
};

$Object* allocate$ServerFactoryImpl($Class* clazz) {
	return $of($alloc(ServerFactoryImpl));
}

$StringArray* ServerFactoryImpl::myMechs = nullptr;
$ints* ServerFactoryImpl::mechPolicies = nullptr;

void ServerFactoryImpl::init$() {
}

$SaslServer* ServerFactoryImpl::createSaslServer($String* mech, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	bool var$0 = $nc(mech)->equals($nc(ServerFactoryImpl::myMechs)->get(ServerFactoryImpl::CRAMMD5));
	if (var$0 && $PolicyUtils::checkPolicy($nc(ServerFactoryImpl::mechPolicies)->get(ServerFactoryImpl::CRAMMD5), props)) {
		if (cbh == nullptr) {
			$throwNew($SaslException, "Callback handler with support for AuthorizeCallback required"_s);
		}
		return $new($CramMD5Server, protocol, serverName, props, cbh);
	}
	return nullptr;
}

$StringArray* ServerFactoryImpl::getMechanismNames($Map* props) {
	return $PolicyUtils::filterMechs(ServerFactoryImpl::myMechs, ServerFactoryImpl::mechPolicies, props);
}

void clinit$ServerFactoryImpl($Class* class$) {
	$assignStatic(ServerFactoryImpl::myMechs, $new($StringArray, {"CRAM-MD5"_s}));
	$assignStatic(ServerFactoryImpl::mechPolicies, $new($ints, {$PolicyUtils::NOPLAINTEXT | $PolicyUtils::NOANONYMOUS}));
}

ServerFactoryImpl::ServerFactoryImpl() {
}

$Class* ServerFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(ServerFactoryImpl, name, initialize, &_ServerFactoryImpl_ClassInfo_, clinit$ServerFactoryImpl, allocate$ServerFactoryImpl);
	return class$;
}

$Class* ServerFactoryImpl::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com