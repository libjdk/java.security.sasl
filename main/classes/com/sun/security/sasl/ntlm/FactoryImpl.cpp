#include <com/sun/security/sasl/ntlm/FactoryImpl.h>

#include <com/sun/security/sasl/ntlm/NTLMClient.h>
#include <com/sun/security/sasl/ntlm/NTLMServer.h>
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
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslClient.h>
#include <javax/security/sasl/SaslClientFactory.h>
#include <javax/security/sasl/SaslException.h>
#include <javax/security/sasl/SaslServer.h>
#include <jcpp.h>

#undef NOANONYMOUS
#undef NOPLAINTEXT
#undef QOP

using $NTLMClient = ::com::sun::security::sasl::ntlm::NTLMClient;
using $NTLMServer = ::com::sun::security::sasl::ntlm::NTLMServer;
using $PolicyUtils = ::com::sun::security::sasl::util::PolicyUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslClientFactory = ::javax::security::sasl::SaslClientFactory;
using $SaslException = ::javax::security::sasl::SaslException;
using $SaslServer = ::javax::security::sasl::SaslServer;
using $SaslServerFactory = ::javax::security::sasl::SaslServerFactory;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace ntlm {

$FieldInfo _FactoryImpl_FieldInfo_[] = {
	{"myMechs", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryImpl, myMechs)},
	{"mechPolicies", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryImpl, mechPolicies)},
	{}
};

$MethodInfo _FactoryImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FactoryImpl::*)()>(&FactoryImpl::init$))},
	{"createSaslClient", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"createSaslServer", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"getMechanismNames", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FactoryImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.security.sasl.ntlm.FactoryImpl",
	"java.lang.Object",
	"javax.security.sasl.SaslClientFactory,javax.security.sasl.SaslServerFactory",
	_FactoryImpl_FieldInfo_,
	_FactoryImpl_MethodInfo_
};

$Object* allocate$FactoryImpl($Class* clazz) {
	return $of($alloc(FactoryImpl));
}

int32_t FactoryImpl::hashCode() {
	 return this->$SaslClientFactory::hashCode();
}

bool FactoryImpl::equals(Object$* arg0) {
	 return this->$SaslClientFactory::equals(arg0);
}

$Object* FactoryImpl::clone() {
	 return this->$SaslClientFactory::clone();
}

$String* FactoryImpl::toString() {
	 return this->$SaslClientFactory::toString();
}

void FactoryImpl::finalize() {
	this->$SaslClientFactory::finalize();
}

$StringArray* FactoryImpl::myMechs = nullptr;
$ints* FactoryImpl::mechPolicies = nullptr;

void FactoryImpl::init$() {
}

$SaslClient* FactoryImpl::createSaslClient($StringArray* mechs, $String* authorizationId, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	for (int32_t i = 0; i < $nc(mechs)->length; ++i) {
		bool var$0 = $nc(mechs->get(i))->equals("NTLM"_s);
		if (var$0 && $PolicyUtils::checkPolicy($nc(FactoryImpl::mechPolicies)->get(0), props)) {
			if (cbh == nullptr) {
				$throwNew($SaslException, "Callback handler with support for RealmCallback, NameCallback, and PasswordCallback required"_s);
			}
			return $new($NTLMClient, mechs->get(i), authorizationId, protocol, serverName, props, cbh);
		}
	}
	return nullptr;
}

$SaslServer* FactoryImpl::createSaslServer($String* mech, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	bool var$0 = $nc(mech)->equals("NTLM"_s);
	if (var$0 && $PolicyUtils::checkPolicy($nc(FactoryImpl::mechPolicies)->get(0), props)) {
		if (props != nullptr) {
			$init($Sasl);
			$var($String, qop, $cast($String, props->get($Sasl::QOP)));
			if (qop != nullptr && !qop->equals("auth"_s)) {
				$throwNew($SaslException, "NTLM only support auth"_s);
			}
		}
		if (cbh == nullptr) {
			$throwNew($SaslException, "Callback handler with support for RealmCallback, NameCallback, and PasswordCallback required"_s);
		}
		return $new($NTLMServer, mech, protocol, serverName, props, cbh);
	}
	return nullptr;
}

$StringArray* FactoryImpl::getMechanismNames($Map* env) {
	return $PolicyUtils::filterMechs(FactoryImpl::myMechs, FactoryImpl::mechPolicies, env);
}

void clinit$FactoryImpl($Class* class$) {
	$assignStatic(FactoryImpl::myMechs, $new($StringArray, {"NTLM"_s}));
	$assignStatic(FactoryImpl::mechPolicies, $new($ints, {$PolicyUtils::NOPLAINTEXT | $PolicyUtils::NOANONYMOUS}));
}

FactoryImpl::FactoryImpl() {
}

$Class* FactoryImpl::load$($String* name, bool initialize) {
	$loadClass(FactoryImpl, name, initialize, &_FactoryImpl_ClassInfo_, clinit$FactoryImpl, allocate$FactoryImpl);
	return class$;
}

$Class* FactoryImpl::class$ = nullptr;

				} // ntlm
			} // sasl
		} // security
	} // sun
} // com