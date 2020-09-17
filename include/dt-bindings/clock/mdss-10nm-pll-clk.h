
/*
 * Copyright (c) 2017-2019, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MDSS_10NM_PLL_CLK_H
#define __MDSS_10NM_PLL_CLK_H

/* DSI PLL clocks */
#define VCO_CLK_0		0
#define PLL_OUT_DIV_0_CLK	1
#define BITCLK_SRC_0_CLK	2
#define BYTECLK_SRC_0_CLK	3
#define POST_BIT_DIV_0_CLK	4
#define POST_VCO_DIV_0_CLK	5
#define BYTECLK_MUX_0_CLK	6
#define PCLK_SRC_MUX_0_CLK	7
#define PCLK_SRC_0_CLK		8
#define PCLK_MUX_0_CLK		9
/* CPHY clocks for DSI-0 PLL */
#define CPHY_BYTECLK_SRC_0_CLK	10
#define POST_VCO_DIV3_5_0_CLK	11
#define CPHY_PCLK_SRC_MUX_0_CLK	12
#define CPHY_PCLK_SRC_0_CLK	13

#define SHADOW_VCO_CLK_0		14
#define SHADOW_PLL_OUT_DIV_0_CLK	15
#define SHADOW_BITCLK_SRC_0_CLK		16
#define SHADOW_BYTECLK_SRC_0_CLK	17
#define SHADOW_POST_BIT_DIV_0_CLK	18
#define SHADOW_POST_VCO_DIV_0_CLK	19
#define SHADOW_PCLK_SRC_MUX_0_CLK	20
#define SHADOW_PCLK_SRC_0_CLK		21
#define VCO_CLK_1		22
#define PLL_OUT_DIV_1_CLK	23
#define BITCLK_SRC_1_CLK	24
#define BYTECLK_SRC_1_CLK	25
#define POST_BIT_DIV_1_CLK	26
#define POST_VCO_DIV_1_CLK	27
#define BYTECLK_MUX_1_CLK	28
#define PCLK_SRC_MUX_1_CLK	29
#define PCLK_SRC_1_CLK		30
#define PCLK_MUX_1_CLK		31
/* CPHY clocks for DSI-1 PLL */
#define CPHY_BYTECLK_SRC_1_CLK	32
#define POST_VCO_DIV3_5_1_CLK	33
#define CPHY_PCLK_SRC_MUX_1_CLK	34
#define CPHY_PCLK_SRC_1_CLK	35

#define SHADOW_VCO_CLK_1		36
#define SHADOW_PLL_OUT_DIV_1_CLK	37
#define SHADOW_BITCLK_SRC_1_CLK		38
#define SHADOW_BYTECLK_SRC_1_CLK	39
#define SHADOW_POST_BIT_DIV_1_CLK	40
#define SHADOW_POST_VCO_DIV_1_CLK	41
#define SHADOW_PCLK_SRC_MUX_1_CLK	42
#define SHADOW_PCLK_SRC_1_CLK		43

/* DP PLL clocks */
#define	DP_VCO_CLK	0
#define	DP_LINK_CLK_DIVSEL_TEN	1
#define	DP_VCO_DIVIDED_TWO_CLK_SRC	2
#define	DP_VCO_DIVIDED_FOUR_CLK_SRC	3
#define	DP_VCO_DIVIDED_SIX_CLK_SRC	4
#define	DP_VCO_DIVIDED_CLK_SRC_MUX	5
#endif
