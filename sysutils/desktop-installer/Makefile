# Created by: Jason Bacon <jwbacon@tds.net>
# $FreeBSD$

PORTNAME=	desktop-installer
PORTVERSION=	0.4.7
CATEGORIES=	sysutils
MASTER_SITES=	http://acadix.biz/Ports/distfiles/ \
		http://personalpages.tds.net/~jwbacon/Ports/distfiles/

MAINTAINER=	jwbacon@tds.net
COMMENT=	Quickly configure a FreeBSD desktop system

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	auto-admin>=0.3.4:${PORTSDIR}/sysutils/auto-admin

USES=		tar:xz

NO_BUILD=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/Doc/${PORTNAME}.man \
		${STAGEDIR}${PREFIX}/man/man1/${PORTNAME}.1
	${MKDIR} ${STAGEDIR}${DATADIR}
	${CP} -r ${WRKSRC}/Data/* ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DATADIR}/Scripts
	${INSTALL_SCRIPT} ${WRKSRC}/Scripts/* ${STAGEDIR}${DATADIR}/Scripts

.include <bsd.port.mk>
