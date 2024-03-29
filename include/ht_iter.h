/*
 * MIT License
 *
 * Copyright (c) 2021 Yago Fontoura do Rosário <yago.rosario@hotmail.com.br>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/**
 * @file ht.h
 *
 * @author Yago Fontoura do Rosario <yago.rosario@hotmail.com.br>
 */

#ifndef HT_ITER_H
#define HT_ITER_H

#include <stdint.h>

#include "ht.h"

/**
 * @brief Hash table iterator
 *
 */
typedef struct {
  /**
   * @brief Current index in entries
   *
   */
  uint32_t      current;

  /**
   * @brief Pointer to the hash table
   *
   */
  ht_t *        hash_table;
} ht_iter_t;

/**
 * @brief Function to initialize a hash table iterator
 *
 * @param[in] ht_iterator Hash table iterator pointer
 * @param[in] hash_table Hash table pointer
 * @return uint8_t 1 if the hash table iterator was initialized else 0
 */
uint8_t ht_iter_init(ht_iter_t *ht_iterator,
    ht_t *hash_table);

/**
 * @brief Function to get the next key and data in the hash table
 *
 * @param[in] ht_iterator Hash table iterator pointer
 * @param[in] hash_table Hash table pointer
 * @param[out] key Key pointer
 * @param[out] data Data pointer
 * @return uint8_t 1 if the there is a next item else 0
 */
uint8_t ht_iter_get_next(ht_iter_t *ht_iterator,
    ht_t *hash_table, uint8_t *key, uint8_t *data);

#endif /* HT_ITER_H */
