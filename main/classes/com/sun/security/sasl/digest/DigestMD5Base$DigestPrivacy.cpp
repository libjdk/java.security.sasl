#include <com/sun/security/sasl/digest/DigestMD5Base$DigestPrivacy.h>

#include <com/sun/security/sasl/digest/DigestMD5Base$DigestIntegrity.h>
#include <com/sun/security/sasl/digest/DigestMD5Base.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/util/Arrays.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <javax/crypto/NoSuchPaddingException.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef CIPHER_TOKENS
#undef CLIENT_CONF_MAGIC
#undef DECRYPT_MODE
#undef DP_CLASS_NAME
#undef EMPTY_BYTE_ARRAY
#undef ENCRYPT_MODE
#undef FINER
#undef FINEST
#undef H_A1
#undef INFO
#undef SVR_CONF_MAGIC

using $DigestMD5Base = ::com::sun::security::sasl::digest::DigestMD5Base;
using $DigestMD5Base$DigestIntegrity = ::com::sun::security::sasl::digest::DigestMD5Base$DigestIntegrity;
using $IOException = ::java::io::IOException;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Charset = ::java::nio::charset::Charset;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyException = ::java::security::KeyException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $Arrays = ::java::util::Arrays;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Cipher = ::javax::crypto::Cipher;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;
using $NoSuchPaddingException = ::javax::crypto::NoSuchPaddingException;
using $SecretKey = ::javax::crypto::SecretKey;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

$FieldInfo _DigestMD5Base$DigestPrivacy_FieldInfo_[] = {
	{"this$0", "Lcom/sun/security/sasl/digest/DigestMD5Base;", nullptr, $FINAL | $SYNTHETIC, $field(DigestMD5Base$DigestPrivacy, this$0)},
	{"CLIENT_CONF_MAGIC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base$DigestPrivacy, CLIENT_CONF_MAGIC)},
	{"SVR_CONF_MAGIC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base$DigestPrivacy, SVR_CONF_MAGIC)},
	{"encCipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE, $field(DigestMD5Base$DigestPrivacy, encCipher)},
	{"decCipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE, $field(DigestMD5Base$DigestPrivacy, decCipher)},
	{}
};

$MethodInfo _DigestMD5Base$DigestPrivacy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/security/sasl/digest/DigestMD5Base;Z)V", nullptr, 0, $method(static_cast<void(DigestMD5Base$DigestPrivacy::*)($DigestMD5Base*,bool)>(&DigestMD5Base$DigestPrivacy::init$)), "javax.security.sasl.SaslException"},
	{"generatePrivacyKeyPair", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(DigestMD5Base$DigestPrivacy::*)(bool)>(&DigestMD5Base$DigestPrivacy::generatePrivacyKeyPair)), "java.io.IOException,java.security.NoSuchAlgorithmException,javax.security.sasl.SaslException"},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$InnerClassInfo _DigestMD5Base$DigestPrivacy_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.digest.DigestMD5Base$DigestPrivacy", "com.sun.security.sasl.digest.DigestMD5Base", "DigestPrivacy", $FINAL},
	{"com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity", "com.sun.security.sasl.digest.DigestMD5Base", "DigestIntegrity", 0},
	{}
};

$ClassInfo _DigestMD5Base$DigestPrivacy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.digest.DigestMD5Base$DigestPrivacy",
	"com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity",
	nullptr,
	_DigestMD5Base$DigestPrivacy_FieldInfo_,
	_DigestMD5Base$DigestPrivacy_MethodInfo_,
	nullptr,
	nullptr,
	_DigestMD5Base$DigestPrivacy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.security.sasl.digest.DigestMD5Base"
};

$Object* allocate$DigestMD5Base$DigestPrivacy($Class* clazz) {
	return $of($alloc(DigestMD5Base$DigestPrivacy));
}

$String* DigestMD5Base$DigestPrivacy::CLIENT_CONF_MAGIC = nullptr;
$String* DigestMD5Base$DigestPrivacy::SVR_CONF_MAGIC = nullptr;

void DigestMD5Base$DigestPrivacy::init$($DigestMD5Base* this$0, bool clientMode) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$DigestMD5Base$DigestIntegrity::init$(this$0, clientMode);
	try {
		generatePrivacyKeyPair(clientMode);
	} catch ($SaslException&) {
		$var($SaslException, e, $catch());
		$throw(e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Error accessing buffers required to generate cipher keys"_s, e);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Error creating instance of required cipher or digest"_s, e);
	}
}

void DigestMD5Base$DigestPrivacy::generatePrivacyKeyPair(bool clientMode) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, ccmagic, $nc(DigestMD5Base$DigestPrivacy::CLIENT_CONF_MAGIC)->getBytes(this->this$0->encoding));
	$var($bytes, scmagic, $nc(DigestMD5Base$DigestPrivacy::SVR_CONF_MAGIC)->getBytes(this->this$0->encoding));
	$var($MessageDigest, md5, $MessageDigest::getInstance("MD5"_s));
	int32_t n = 0;
	$init($DigestMD5Base);
	if ($nc(this->this$0->negotiatedCipher)->equals($nc($DigestMD5Base::CIPHER_TOKENS)->get(4))) {
		n = 5;
	} else {
		if ($nc(this->this$0->negotiatedCipher)->equals($nc($DigestMD5Base::CIPHER_TOKENS)->get(3))) {
			n = 7;
		} else {
			n = 16;
		}
	}
	$var($bytes, keyBuffer, $new($bytes, n + ccmagic->length));
	$System::arraycopy(this->this$0->H_A1, 0, keyBuffer, 0, n);
	$System::arraycopy(ccmagic, 0, keyBuffer, n, ccmagic->length);
	$nc(md5)->update(keyBuffer);
	$var($bytes, Kcc, md5->digest());
	$System::arraycopy(scmagic, 0, keyBuffer, n, scmagic->length);
	md5->update(keyBuffer);
	$var($bytes, Kcs, md5->digest());
	$init($Level);
	if ($nc($($DigestMD5Base::access$2100()))->isLoggable($Level::FINER)) {
		$DigestMD5Base::access$2200($DigestMD5Base::DP_CLASS_NAME, "generatePrivacyKeyPair"_s, "DIGEST24:Kcc: "_s, Kcc);
		$DigestMD5Base::access$2300($DigestMD5Base::DP_CLASS_NAME, "generatePrivacyKeyPair"_s, "DIGEST25:Kcs: "_s, Kcs);
	}
	$var($bytes, myKc, nullptr);
	$var($bytes, peerKc, nullptr);
	if (clientMode) {
		$assign(myKc, Kcc);
		$assign(peerKc, Kcs);
	} else {
		$assign(myKc, Kcs);
		$assign(peerKc, Kcc);
	}
	try {
		$var($SecretKey, encKey, nullptr);
		$var($SecretKey, decKey, nullptr);
		if ($nc(this->this$0->negotiatedCipher)->indexOf($nc($DigestMD5Base::CIPHER_TOKENS)->get(1)) > -1) {
			$set(this, encCipher, $Cipher::getInstance("RC4"_s));
			$set(this, decCipher, $Cipher::getInstance("RC4"_s));
			$assign(encKey, $new($SecretKeySpec, myKc, "RC4"_s));
			$assign(decKey, $new($SecretKeySpec, peerKc, "RC4"_s));
			$nc(this->encCipher)->init($Cipher::ENCRYPT_MODE, static_cast<$Key*>(encKey));
			$nc(this->decCipher)->init($Cipher::DECRYPT_MODE, static_cast<$Key*>(decKey));
		} else {
			bool var$1 = ($nc(this->this$0->negotiatedCipher)->equals($nc($DigestMD5Base::CIPHER_TOKENS)->get(2)));
			if (var$1 || ($nc(this->this$0->negotiatedCipher)->equals($nc($DigestMD5Base::CIPHER_TOKENS)->get(0)))) {
				$var($String, cipherFullname, nullptr);
				$var($String, cipherShortname, nullptr);
				if ($nc(this->this$0->negotiatedCipher)->equals($nc($DigestMD5Base::CIPHER_TOKENS)->get(2))) {
					$assign(cipherFullname, "DES/CBC/NoPadding"_s);
					$assign(cipherShortname, "des"_s);
				} else {
					$assign(cipherFullname, "DESede/CBC/NoPadding"_s);
					$assign(cipherShortname, "desede"_s);
				}
				$set(this, encCipher, $Cipher::getInstance(cipherFullname));
				$set(this, decCipher, $Cipher::getInstance(cipherFullname));
				$assign(encKey, $DigestMD5Base::makeDesKeys(myKc, cipherShortname));
				$assign(decKey, $DigestMD5Base::makeDesKeys(peerKc, cipherShortname));
				$var($IvParameterSpec, encIv, $new($IvParameterSpec, myKc, 8, 8));
				$var($IvParameterSpec, decIv, $new($IvParameterSpec, peerKc, 8, 8));
				$nc(this->encCipher)->init($Cipher::ENCRYPT_MODE, static_cast<$Key*>(encKey), static_cast<$AlgorithmParameterSpec*>(encIv));
				$nc(this->decCipher)->init($Cipher::DECRYPT_MODE, static_cast<$Key*>(decKey), static_cast<$AlgorithmParameterSpec*>(decIv));
				if ($nc($($DigestMD5Base::access$2400()))->isLoggable($Level::FINER)) {
					$DigestMD5Base::access$2500($DigestMD5Base::DP_CLASS_NAME, "generatePrivacyKeyPair"_s, $$str({"DIGEST26:"_s, this->this$0->negotiatedCipher, " IVcc: "_s}), $(encIv->getIV()));
					$DigestMD5Base::access$2600($DigestMD5Base::DP_CLASS_NAME, "generatePrivacyKeyPair"_s, $$str({"DIGEST27:"_s, this->this$0->negotiatedCipher, " IVcs: "_s}), $(decIv->getIV()));
					$DigestMD5Base::access$2700($DigestMD5Base::DP_CLASS_NAME, "generatePrivacyKeyPair"_s, $$str({"DIGEST28:"_s, this->this$0->negotiatedCipher, " encryption key: "_s}), $($nc(encKey)->getEncoded()));
					$DigestMD5Base::access$2800($DigestMD5Base::DP_CLASS_NAME, "generatePrivacyKeyPair"_s, $$str({"DIGEST29:"_s, this->this$0->negotiatedCipher, " decryption key: "_s}), $($nc(decKey)->getEncoded()));
				}
			}
		}
	} catch ($InvalidKeySpecException&) {
		$var($InvalidKeySpecException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Unsupported key specification used."_s, e);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Invalid cipher algorithem parameter used to create cipher instance"_s, e);
	} catch ($NoSuchPaddingException&) {
		$var($NoSuchPaddingException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Unsupported padding used for chosen cipher"_s, e);
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Invalid data used to initialize keys"_s, e);
	}
}

$bytes* DigestMD5Base$DigestPrivacy::wrap($bytes* outgoing, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		$init($DigestMD5Base);
		return $DigestMD5Base::EMPTY_BYTE_ARRAY;
	}
	incrementSeqNum();
	$var($bytes, mac, getHMAC(this->myKi, this->sequenceNum, outgoing, start, len));
	$init($Level);
	if ($nc($($DigestMD5Base::access$2900()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$3000($DigestMD5Base::DP_CLASS_NAME, "wrap"_s, "DIGEST30:Outgoing: "_s, outgoing, start, len);
		$DigestMD5Base::access$3100($DigestMD5Base::DP_CLASS_NAME, "wrap"_s, "seqNum: "_s, this->sequenceNum);
		$DigestMD5Base::access$3200($DigestMD5Base::DP_CLASS_NAME, "wrap"_s, "MAC: "_s, mac);
	}
	int32_t bs = $nc(this->encCipher)->getBlockSize();
	$var($bytes, padding, nullptr);
	if (bs > 1) {
		int32_t pad = bs - ($mod((len + 10), bs));
		$assign(padding, $new($bytes, pad));
		for (int32_t i = 0; i < pad; ++i) {
			padding->set(i, (int8_t)pad);
		}
	} else {
		$init($DigestMD5Base);
		$assign(padding, $DigestMD5Base::EMPTY_BYTE_ARRAY);
	}
	$var($bytes, toBeEncrypted, $new($bytes, len + $nc(padding)->length + 10));
	$System::arraycopy(outgoing, start, toBeEncrypted, 0, len);
	$System::arraycopy(padding, 0, toBeEncrypted, len, padding->length);
	$System::arraycopy(mac, 0, toBeEncrypted, len + padding->length, 10);
	if ($nc($($DigestMD5Base::access$3300()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$3400($DigestMD5Base::DP_CLASS_NAME, "wrap"_s, "DIGEST31:{msg, pad, KicMAC}: "_s, toBeEncrypted);
	}
	$var($bytes, cipherBlock, nullptr);
	try {
		$assign(cipherBlock, $nc(this->encCipher)->update(toBeEncrypted));
		if (cipherBlock == nullptr) {
			$throwNew($IllegalBlockSizeException, $$str({""_s, $$str(toBeEncrypted->length)}));
		}
	} catch ($IllegalBlockSizeException&) {
		$var($IllegalBlockSizeException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Invalid block size for cipher"_s, e);
	}
	$var($bytes, wrapped, $new($bytes, $nc(cipherBlock)->length + 2 + 4));
	$System::arraycopy(cipherBlock, 0, wrapped, 0, cipherBlock->length);
	$System::arraycopy(this->messageType, 0, wrapped, cipherBlock->length, 2);
	$System::arraycopy(this->sequenceNum, 0, wrapped, cipherBlock->length + 2, 4);
	if ($nc($($DigestMD5Base::access$3500()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$3600($DigestMD5Base::DP_CLASS_NAME, "wrap"_s, "DIGEST32:Wrapped: "_s, wrapped);
	}
	return wrapped;
}

$bytes* DigestMD5Base$DigestPrivacy::unwrap($bytes* incoming, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		$init($DigestMD5Base);
		return $DigestMD5Base::EMPTY_BYTE_ARRAY;
	}
	$var($bytes, encryptedMsg, $new($bytes, len - 6));
	$var($bytes, msgType, $new($bytes, 2));
	$var($bytes, seqNum, $new($bytes, 4));
	$System::arraycopy(incoming, start, encryptedMsg, 0, encryptedMsg->length);
	$System::arraycopy(incoming, start + encryptedMsg->length, msgType, 0, 2);
	$System::arraycopy(incoming, start + encryptedMsg->length + 2, seqNum, 0, 4);
	$init($Level);
	if ($nc($($DigestMD5Base::access$3700()))->isLoggable($Level::FINEST)) {
		$nc($($DigestMD5Base::access$3800()))->log($Level::FINEST, "DIGEST33:Expecting sequence num: {0}"_s, $($of($Integer::valueOf(this->peerSeqNum))));
		$init($DigestMD5Base);
		$DigestMD5Base::access$3900($DigestMD5Base::DP_CLASS_NAME, "unwrap"_s, "DIGEST34:incoming: "_s, encryptedMsg);
	}
	$var($bytes, decryptedMsg, nullptr);
	try {
		$assign(decryptedMsg, $nc(this->decCipher)->update(encryptedMsg));
		if (decryptedMsg == nullptr) {
			$throwNew($IllegalBlockSizeException, $$str({""_s, $$str(encryptedMsg->length)}));
		}
	} catch ($IllegalBlockSizeException&) {
		$var($IllegalBlockSizeException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Illegal block sizes used with chosen cipher"_s, e);
	}
	$var($bytes, msgWithPadding, $new($bytes, $nc(decryptedMsg)->length - 10));
	$var($bytes, mac, $new($bytes, 10));
	$System::arraycopy(decryptedMsg, 0, msgWithPadding, 0, msgWithPadding->length);
	$System::arraycopy(decryptedMsg, msgWithPadding->length, mac, 0, 10);
	if ($nc($($DigestMD5Base::access$4000()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$4100($DigestMD5Base::DP_CLASS_NAME, "unwrap"_s, "DIGEST35:Unwrapped (w/padding): "_s, msgWithPadding);
		$DigestMD5Base::access$4200($DigestMD5Base::DP_CLASS_NAME, "unwrap"_s, "DIGEST36:MAC: "_s, mac);
		$DigestMD5Base::access$4300($DigestMD5Base::DP_CLASS_NAME, "unwrap"_s, "DIGEST37:messageType: "_s, msgType);
		$DigestMD5Base::access$4400($DigestMD5Base::DP_CLASS_NAME, "unwrap"_s, "DIGEST38:sequenceNum: "_s, seqNum);
	}
	int32_t msgLength = msgWithPadding->length;
	int32_t blockSize = $nc(this->decCipher)->getBlockSize();
	if (blockSize > 1) {
		msgLength -= (int32_t)msgWithPadding->get(msgWithPadding->length - 1);
		if (msgLength < 0) {
			if ($nc($($DigestMD5Base::access$4500()))->isLoggable($Level::INFO)) {
				$nc($($DigestMD5Base::access$4600()))->log($Level::INFO, "DIGEST39:Incorrect padding: {0}"_s, $($of($Byte::valueOf(msgWithPadding->get(msgWithPadding->length - 1)))));
			}
			$init($DigestMD5Base);
			return $DigestMD5Base::EMPTY_BYTE_ARRAY;
		}
	}
	$var($bytes, expectedMac, getHMAC(this->peerKi, seqNum, msgWithPadding, 0, msgLength));
	if ($nc($($DigestMD5Base::access$4700()))->isLoggable($Level::FINEST)) {
		$init($DigestMD5Base);
		$DigestMD5Base::access$4800($DigestMD5Base::DP_CLASS_NAME, "unwrap"_s, "DIGEST40:KisMAC: "_s, expectedMac);
	}
	if (!$Arrays::equals(mac, expectedMac)) {
		$nc($($DigestMD5Base::access$4900()))->log($Level::INFO, "DIGEST41:Unmatched MACs"_s);
		$init($DigestMD5Base);
		return $DigestMD5Base::EMPTY_BYTE_ARRAY;
	}
	if (this->peerSeqNum != $DigestMD5Base::access$5000(seqNum, 0, 4)) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: Out of order sequencing of messages from server. Got: "_s, $$str($DigestMD5Base::access$5100(seqNum, 0, 4)), " Expected: "_s, $$str(this->peerSeqNum)}));
	}
	if (!$Arrays::equals(this->messageType, msgType)) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: invalid message type: "_s, $$str($DigestMD5Base::access$5200(msgType, 0, 2))}));
	}
	++this->peerSeqNum;
	if (msgLength == msgWithPadding->length) {
		return msgWithPadding;
	} else {
		$var($bytes, clearMsg, $new($bytes, msgLength));
		$System::arraycopy(msgWithPadding, 0, clearMsg, 0, msgLength);
		return clearMsg;
	}
}

DigestMD5Base$DigestPrivacy::DigestMD5Base$DigestPrivacy() {
}

void clinit$DigestMD5Base$DigestPrivacy($Class* class$) {
	$assignStatic(DigestMD5Base$DigestPrivacy::CLIENT_CONF_MAGIC, "Digest H(A1) to client-to-server sealing key magic constant"_s);
	$assignStatic(DigestMD5Base$DigestPrivacy::SVR_CONF_MAGIC, "Digest H(A1) to server-to-client sealing key magic constant"_s);
}

$Class* DigestMD5Base$DigestPrivacy::load$($String* name, bool initialize) {
	$loadClass(DigestMD5Base$DigestPrivacy, name, initialize, &_DigestMD5Base$DigestPrivacy_ClassInfo_, clinit$DigestMD5Base$DigestPrivacy, allocate$DigestMD5Base$DigestPrivacy);
	return class$;
}

$Class* DigestMD5Base$DigestPrivacy::class$ = nullptr;

				} // digest
			} // sasl
		} // security
	} // sun
} // com