//---------------------------------------------------------------------------//
// Copyright (c) 2020-2021 Mikhail Komarov <nemo@nil.foundation>
// Copyright (c) 2020-2021 Nikita Kaskov <nbering@nil.foundation>
//
// MIT License
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//---------------------------------------------------------------------------//

#ifndef CRYPTO3_MATH_LAGRANGE_INTERPOLATION_HPP
#define CRYPTO3_MATH_LAGRANGE_INTERPOLATION_HPP

#include <nil/crypto3/math/polynomial/polynomial.hpp>

namespace nil {
    namespace crypto3 {
        namespace math {
            namespace polynomial {

                /*!
                 * @brief Perform polynomial Lagrange interpolation from points.
                 */
                template<typename FieldValueType>
                polynomial<FieldValueType> lagrange_interpolation(
                    const std::vector<std::pair<FieldValueType, FieldValueType>> &points) {

                    return polynomial<FieldValueType>();
                }

                template<typename FieldValueType, std::size_t ContainerSize>
                polynomial<FieldValueType> lagrange_interpolation(
                    const std::array<std::pair<FieldValueType, FieldValueType>, ContainerSize> &points) {

                    return polynomial<FieldValueType>();
                }

                template<typename FieldValueType>
                polynomial<FieldValueType> lagrange_interpolation(
                    const std::vector<FieldValueType> &points) {

                    return polynomial<FieldValueType>();
                }

            }    // namespace polynomial
        }    // namespace math
    }        // namespace crypto3
}    // namespace nil

#endif    // CRYPTO3_MATH_LAGRANGE_INTERPOLATION_HPP