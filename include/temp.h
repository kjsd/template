/**
 * @version $Id: temp.h 33 2008-12-25 06:42:26Z Administrator $
 *
 * @brief Sample Header
 *
 * This header file declares the sample functions that are providede
 * by the Sample Project for C.
 *
 * @author Kenji MINOURA / info@kandj.org
 *
 * Copyright (c) 2008 K&J Software Design, Ltd All rights reserved.
 *
 ***********************************************************************/
/**
 * @mainpage はじめに
 *
 * @section abstract この文書について
 * この文書は、詳細設計仕様ジェネレータdoxygenのサンプルである．@n
 * ソース，ヘッダ，Makefile，doxygenの設定ファイルのテンプレートで
 * 構成されている．
 *
 * @section target 対象
 * これはソフト開発のドキュメント作成に関わるエンジニア向けの文書である。
 *
 * @note ソースファイルの文字コードには、EUC-JP、ISO-2022-JP、Shift-JIS、
 * UTF-8、などが使用可能であるが、UTF-8はコード変換に失敗する場合がある。
 *
 * @attention Sample Projectはプレフィックス "TEMP_" から始まる名前空間を
 * 予約している．アプリケーション側でこの領域を使用してはならない．
 *
 ***********************************************************************/
#ifndef TEMP_H
#define TEMP_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _MSC_VER
#endif  // _MSC_VER

#ifdef __GNUC__
#endif  // __GNUC__

/**
 * @defgroup TYPES 型定義
 *
 * @brief 型定義の一覧
 */
/*@{*/
typedef signed char INT8;
    /**< 8ビット符号有り整数型 */
typedef unsigned char UINT8;
    /**< 8ビット符号無し整数型 */
typedef signed short INT16;
    /**< 16ビット符号有り整数型 */
typedef unsigned short UINT16;
    /**< 16ビット符号無し整数型 */
typedef signed int INT32;
    /**< 32ビット符号有り整数型 */
typedef unsigned int UINT32;
    /**< 32ビット符号無し整数型 */
typedef signed long long INT64;
    /**< 64ビット符号有り整数型 */
typedef unsigned long long UINT64;
    /**< 64ビット符号無し整数型 */
/*@}*/

/**
 * @defgroup PARAM 固定パラメータ
 *
 * @brief 制限値などの固定パラメータ
 *
 * これらはAPIに与えるパラメータの上限や無効値を表すリテラルである．
 */

/*@{*/
/**
 * @brief HOGEの最大値
 *
 * <detailed description>
 */
const UINT32 TEMP_MAX_SIZE_OF_HOGE = 256;
/*@}*/

/**
 * @defgroup API API
 *
 * @brief <brief description>.
 *
 * <detailed description>
 */
/*@{*/
/**
 * @brief <brief description>.
 *
 * <detailed description>
 * 
 * @param[in] <name of 1st parameter> <description of 1st parameter>
 * @param[out] <name of 2nd parameter> <description of 2nd parameter>
 * @param[in,out] <name of 3rd parameter> <description of 3rd parameter>
 *
 * @return <description of return value>
 *
 * @see <related items>
 * @note <notifications>
 */
void TEMP_function();
/*@}*/

#ifdef __cplusplus
}
#endif

#endif /* TEMP_H */
