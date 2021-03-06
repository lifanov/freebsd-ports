# Created by: Joe Clarke
# $FreeBSD$

PORTNAME=	openslp
PORTVERSION=	1.2.1
PORTREVISION=	5
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/OpenSLP/${PORTVERSION}

MAINTAINER=	marcus@FreeBSD.org
COMMENT=	Open-source implementation of the Service Location Protocol

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool
USE_OPENSSL=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--sysconfdir=${PREFIX}/etc/openslp \
		--localstatedir=/var

USE_RC_SUBR=	slpd

OPTIONS_DEFINE=	SLP_SECURITY ASYNC_API DOCS
SLP_SECURITY_DESC=	Turn on SLPv2 security support
ASYNC_API_DESC=		Enable asynchronous communication API

SLP_SECURITY_CONFIGURE_ENABLE=	slpv2-security
ASYNC_API_CONFIGURE_ENABLE=	async-api

post-extract:
	@(cd ${WRKSRC}; \
		${FIND} doc -type f -path '*/CVS/*' -delete; \
		${FIND} doc -type d -name CVS -delete)

post-install:
.for FILE in slp.conf slp.reg slp.spi
	${INSTALL_DATA} ${WRKSRC}/etc/${FILE} ${STAGEDIR}${PREFIX}/etc/openslp/${FILE}.sample
.endfor
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${INSTALL_WRKSRC}/doc && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
