# Created by: jfitz
# $FreeBSD$

PORTNAME=	analog
PORTVERSION=	6.0
PORTREVISION=	10
PORTEPOCH=	1
CATEGORIES=	www
MASTER_SITES=	http://www.analog.cx/ \
		http://analog.gsp.com/ \
		http://fossies.org/unix/www/ \
		ftp://ftp.polytechnic.edu.na/pub/analog/ \
		http://analog.tzone.it/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast program for analysing WWW logfiles

LICENSE=	GPLv2

LIB_DEPENDS=	libgd.so:${PORTSDIR}/graphics/gd \
		libpng.so:${PORTSDIR}/graphics/png

USES=		jpeg
BUILD_WRKSRC=	${WRKSRC}/src

ALL_TARGET=	${PORTNAME}

SUB_FILES=	pkg-message

LIMGDIR?=	www/data/images
IMGDIR=		${PREFIX}/${LIMGDIR}
PLIST_SUB=	IMGDIR="${LIMGDIR}"

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/analog ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/analog.man ${STAGEDIR}${MANPREFIX}/man/man1/analog.1
	${INSTALL_DATA} ${WRKSRC}/analog.cfg ${STAGEDIR}${PREFIX}/etc/analog.cfg.sample
	${MKDIR} ${STAGEDIR}${DATADIR}/lang
	${INSTALL_DATA} ${WRKSRC}/lang/* ${STAGEDIR}${DATADIR}/lang
	${MKDIR} ${STAGEDIR}${IMGDIR}
	${INSTALL_DATA} ${WRKSRC}/images/* ${STAGEDIR}${IMGDIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/* ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/*.cfg ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/anlgform.html ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/anlgform.pl ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/css
	${INSTALL_DATA} ${WRKSRC}/examples/css/Readme.txt ${STAGEDIR}${EXAMPLESDIR}/css
	${INSTALL_DATA} ${WRKSRC}/examples/css/default.css ${STAGEDIR}${EXAMPLESDIR}/css
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/css/jreeves
	${INSTALL_DATA} ${WRKSRC}/examples/css/jreeves/* ${STAGEDIR}${EXAMPLESDIR}/css/jreeves

.include <bsd.port.mk>
