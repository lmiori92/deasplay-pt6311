/*                                                                                     
 *  Project     Segmented LED Display - ASCII Library                                   
 *  @author     David Madison, Lorenzo Miori                                            
 *  @link       github.com/dmadison/Segmented-LED-Display-ASCII                         
 *  @license    MIT - Copyright (c) 2017 David Madison                                  
 *                    Copyright (c) 2019 Lorenzo Miori                                  
 *                                                                                      
 * Permission is hereby granted, free of charge, to any person obtaining a copy         
 * of this software and associated documentation files (the "Software"), to deal      
 * in the Software without restriction, including without limitation the rights         
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell            
 * copies of the Software, and to permit persons to whom the Software is                
 * furnished to do so, subject to the following conditions:                             
 *                                                                                      
 * The above copyright notice and this permission notice shall be included in           
 * all copies or substantial portions of the Software.                                  
 *                                                                                      
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR         
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,             
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE          
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER               
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,        
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN            
 * THE SOFTWARE.                                                                        
 *                                                                                      
 */

#include "7segment.h"

const uint8_t SevenSegmentASCII[96] = {
    0x00,    /*   */
    0x24,    /* ! */
    0x0c,    /* " */
    0xfc,    /* # */
    0xba,    /* $ */
    0x54,    /* % */
    0x34,    /* & */
    0x08,    /* ' */
    0x8a,    /* ( */
    0x86,    /* ) */
    0x0a,    /* * */
    0x58,    /* + */
    0x40,    /* , */
    0x10,    /* - */
    0x00,    /* . */
    0x54,    /* / */
    0xee,    /* 0 */
    0x24,    /* 1 */
    0xd6,    /* 2 */
    0xb6,    /* 3 */
    0x3c,    /* 4 */
    0xba,    /* 5 */
    0xfa,    /* 6 */
    0x26,    /* 7 */
    0xfe,    /* 8 */
    0xbe,    /* 9 */
    0x82,    /* : */
    0xa2,    /* ; */
    0x1a,    /* < */
    0x90,    /* = */
    0x16,    /* > */
    0x56,    /* ? */
    0xf6,    /* @ */
    0x7e,    /* A */
    0xf8,    /* B */
    0xca,    /* C */
    0xf4,    /* D */
    0xda,    /* E */
    0x5a,    /* F */
    0xea,    /* G */
    0x7c,    /* H */
    0x48,    /* I */
    0xe4,    /* J */
    0x7a,    /* K */
    0xc8,    /* L */
    0x62,    /* M */
    0x6e,    /* N */
    0xee,    /* O */
    0x5e,    /* P */
    0x9e,    /* Q */
    0x4e,    /* R */
    0xba,    /* S */
    0xd8,    /* T */
    0xec,    /* U */
    0xec,    /* V */
    0x8c,    /* W */
    0x7c,    /* X */
    0xbc,    /* Y */
    0xd6,    /* Z */
    0xca,    /* [ */
    0x38,    /* \ */
    0xa6,    /* ] */
    0x0e,    /* ^ */
    0x80,    /* _ */
    0x04,    /* ` */
    0xf6,    /* a */
    0xf8,    /* b */
    0xd0,    /* c */
    0xf4,    /* d */
    0xde,    /* e */
    0x5a,    /* f */
    0xbe,    /* g */
    0x78,    /* h */
    0x40,    /* i */
    0xa0,    /* j */
    0x7a,    /* k */
    0x48,    /* l */
    0x60,    /* m */
    0x70,    /* n */
    0xf0,    /* o */
    0x5e,    /* p */
    0x3e,    /* q */
    0x50,    /* r */
    0xba,    /* s */
    0xd8,    /* t */
    0xe0,    /* u */
    0xe0,    /* v */
    0x60,    /* w */
    0x7c,    /* x */
    0xbc,    /* y */
    0xd6,    /* z */
    0x34,    /* { */
    0x48,    /* | */
    0x58,    /* } */
    0x02,    /* ~ */
    0x00,    /*  */
};

