#include <com/sun/security/sasl/digest/SecurityCtx.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

$MethodInfo _SecurityCtx_MethodInfo_[] = {
	{"unwrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _SecurityCtx_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.security.sasl.digest.SecurityCtx",
	nullptr,
	nullptr,
	nullptr,
	_SecurityCtx_MethodInfo_
};

$Object* allocate$SecurityCtx($Class* clazz) {
	return $of($alloc(SecurityCtx));
}

$Class* SecurityCtx::load$($String* name, bool initialize) {
	$loadClass(SecurityCtx, name, initialize, &_SecurityCtx_ClassInfo_, allocate$SecurityCtx);
	return class$;
}

$Class* SecurityCtx::class$ = nullptr;

				} // digest
			} // sasl
		} // security
	} // sun
} // com