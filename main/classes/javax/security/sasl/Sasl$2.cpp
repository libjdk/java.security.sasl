#include <javax/security/sasl/Sasl$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslServerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslServerFactory = ::javax::security::sasl::SaslServerFactory;

namespace javax {
	namespace security {
		namespace sasl {

$FieldInfo _Sasl$2_FieldInfo_[] = {
	{"val$iter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Sasl$2, val$iter)},
	{}
};

$MethodInfo _Sasl$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(Sasl$2::*)($Iterator*)>(&Sasl$2::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/security/sasl/SaslServerFactory;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Sasl$2_EnclosingMethodInfo_ = {
	"javax.security.sasl.Sasl",
	"getSaslServerFactories",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _Sasl$2_InnerClassesInfo_[] = {
	{"javax.security.sasl.Sasl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Sasl$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.sasl.Sasl$2",
	"java.lang.Object",
	"java.util.Enumeration",
	_Sasl$2_FieldInfo_,
	_Sasl$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/security/sasl/SaslServerFactory;>;",
	&_Sasl$2_EnclosingMethodInfo_,
	_Sasl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.sasl.Sasl"
};

$Object* allocate$Sasl$2($Class* clazz) {
	return $of($alloc(Sasl$2));
}

void Sasl$2::init$($Iterator* val$iter) {
	$set(this, val$iter, val$iter);
}

bool Sasl$2::hasMoreElements() {
	return $nc(this->val$iter)->hasNext();
}

$Object* Sasl$2::nextElement() {
	return $of($cast($SaslServerFactory, $nc(this->val$iter)->next()));
}

Sasl$2::Sasl$2() {
}

$Class* Sasl$2::load$($String* name, bool initialize) {
	$loadClass(Sasl$2, name, initialize, &_Sasl$2_ClassInfo_, allocate$Sasl$2);
	return class$;
}

$Class* Sasl$2::class$ = nullptr;

		} // sasl
	} // security
} // javax