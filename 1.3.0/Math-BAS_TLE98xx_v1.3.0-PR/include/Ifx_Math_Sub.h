/*
 * Copyright (c) 2022 Infineon Technologies AG. All Rights Reserved.
 *
 * Use of this file is subject to the terms of use agreed between (i) you or the company in which ordinary course of
 * business you are acting and (ii) Infineon Technologies AG, its affiliates or its licensees. If and as long as no
 * such terms of use are agreed, use of this file is subject to the Evaluation Software License Agreement distributed
 * along with this file within the software delivery package.
 *
 */

/**
 * \file Ifx_Math_Sub.h
 * \brief Provides functions which return the fractional difference of two fractional numbers, without saturation and
 * any overflow detection.
 */

#ifndef IFX_MATH_SUB_H
#define IFX_MATH_SUB_H
#include "Ifx_Math.h"

/**
 *  \brief Return the 16-bit fractional difference of two 16-bit fractional numbers, x and y, without saturation and any
 * overflow detection.
 *
 *
 *  \param [in] x The first operand of the subtraction
 *  \param [in] y The second operand of the subtraction
 *
 *  \return 16-bit difference of the two input parameters
 */

/* polyspace-begin CODE-METRIC:CALLING [Justified:Low] "Common math library functions are expected to be called multiple
 * times." */
static inline Ifx_Math_Fract16 Ifx_Math_Sub_F16(Ifx_Math_Fract16 x, Ifx_Math_Fract16 y)
{
    return x - y;
}


/* polyspace-end CODE-METRIC:CALLING [Justified:Low] "Common math library functions are expected to be called multiple
 * times." */

/**
 *  \brief Return the 32-bit fractional difference of two 32-bit fractional numbers, x and y, without saturation and any
 * overflow detection.
 *
 *
 *  \param [in] x The first operand of the subtraction
 *  \param [in] y The second operand of the subtraction
 *
 *  \return 32-bit difference of the two input parameters
 */

/* polyspace-begin CODE-METRIC:CALLING [Justified:Low] "Common math library functions are expected to be called multiple
 * times." */
static inline Ifx_Math_Fract32 Ifx_Math_Sub_F32(Ifx_Math_Fract32 x, Ifx_Math_Fract32 y)
{
    return x - y;
}


/* polyspace-end CODE-METRIC:CALLING [Justified:Low] "Common math library functions are expected to be called multiple
 * times." */

/**
 *  \brief Return the 32-bit fractional difference of two 16-bit fractional numbers, x and y, without saturation and any
 * overflow detection.
 *
 *
 *  \param [in] x The first operand of the subtraction
 *  \param [in] y The second operand of the subtraction
 *
 *  \return 32-bit difference of the two input parameters
 */
static inline Ifx_Math_Fract32 Ifx_Math_Sub_F32_F16F16(Ifx_Math_Fract16 x, Ifx_Math_Fract16 y)
{
    return (Ifx_Math_Fract32)x - (Ifx_Math_Fract32)y;
}


#endif /*IFX_MATH_SUB_H*/
