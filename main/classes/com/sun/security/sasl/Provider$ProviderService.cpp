#include <com/sun/security/sasl/Provider$ProviderService.h>

#include <com/sun/security/sasl/ClientFactoryImpl.h>
#include <com/sun/security/sasl/Provider.h>
#include <com/sun/security/sasl/ServerFactoryImpl.h>
#include <com/sun/security/sasl/digest/FactoryImpl.h>
#include <com/sun/security/sasl/ntlm/FactoryImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClientFactoryImpl = ::com::sun::security::sasl::ClientFactoryImpl;
using $Provider = ::com::sun::security::sasl::Provider;
using $ServerFactoryImpl = ::com::sun::security::sasl::ServerFactoryImpl;
using $1FactoryImpl = ::com::sun::security::sasl::digest::FactoryImpl;
using $FactoryImpl = ::com::sun::security::sasl::ntlm::FactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $1Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $ProviderException = ::java::security::ProviderException;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$MethodInfo _Provider$ProviderService_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Provider$ProviderService::*)($1Provider*,$String*,$String*,$String*)>(&Provider$ProviderService::init$))},
	{"newInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _Provider$ProviderService_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.Provider$ProviderService", "com.sun.security.sasl.Provider", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{"java.security.Provider$Service", "java.security.Provider", "Service", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Provider$ProviderService_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.Provider$ProviderService",
	"java.security.Provider$Service",
	nullptr,
	nullptr,
	_Provider$ProviderService_MethodInfo_,
	nullptr,
	nullptr,
	_Provider$ProviderService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.security.sasl.Provider"
};

$Object* allocate$Provider$ProviderService($Class* clazz) {
	return $of($alloc(Provider$ProviderService));
}

void Provider$ProviderService::init$($1Provider* p, $String* type, $String* algo, $String* cn) {
	$Provider$Service::init$(p, type, algo, cn, nullptr, nullptr);
}

$Object* Provider$ProviderService::newInstance(Object$* ctrParamObj) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, getType());
	if (ctrParamObj != nullptr) {
		$throwNew($InvalidParameterException, $$str({"constructorParameter not used with "_s, type, " engines"_s}));
	}
	$var($String, algo, getAlgorithm());
	try {
		if ($nc(algo)->equals("DIGEST-MD5"_s)) {
			return $of($new($1FactoryImpl));
		}
		if ($nc(algo)->equals("NTLM"_s)) {
			return $of($new($FactoryImpl));
		}
		if ($nc(type)->equals("SaslClientFactory"_s)) {
			bool var$1 = $nc(algo)->equals("EXTERNAL"_s);
			bool var$0 = var$1 || $nc(algo)->equals("PLAIN"_s);
			if (var$0 || $nc(algo)->equals("CRAM-MD5"_s)) {
				return $of($new($ClientFactoryImpl));
			}
		} else if (type->equals("SaslServerFactory"_s)) {
			if ($nc(algo)->equals("CRAM-MD5"_s)) {
				return $of($new($ServerFactoryImpl));
			}
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($NoSuchAlgorithmException, $$str({"Error constructing "_s, type, " for "_s, algo, " using SunSASL"_s}), ex);
	}
	$throwNew($ProviderException, $$str({"No impl for "_s, algo, " "_s, type}));
	$shouldNotReachHere();
}

Provider$ProviderService::Provider$ProviderService() {
}

$Class* Provider$ProviderService::load$($String* name, bool initialize) {
	$loadClass(Provider$ProviderService, name, initialize, &_Provider$ProviderService_ClassInfo_, allocate$Provider$ProviderService);
	return class$;
}

$Class* Provider$ProviderService::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com