#ifndef _javax_security_sasl_Sasl$1_h_
#define _javax_security_sasl_Sasl$1_h_
//$ class javax.security.sasl.Sasl$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace javax {
	namespace security {
		namespace sasl {

class Sasl$1 : public ::java::util::Enumeration {
	$class(Sasl$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Sasl$1();
	void init$(::java::util::Iterator* val$iter);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Iterator* val$iter = nullptr;
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_Sasl$1_h_