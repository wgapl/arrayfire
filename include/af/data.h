/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#pragma once
#include <af/defines.h>

#ifdef __cplusplus
#include <af/dim4.hpp>
namespace af
{
    class array;

    /**
       \defgroup data_func_constant constant
       Create constant array from the specified dimensions
       @{

       \ingroup arrayfire_func
       \ingroup move_mat
    */
#define CONSTANT(TYPE, TY)                                              \
    AFAPI array constant(TYPE val, const dim4 &dims, const dtype ty=TY); \
    AFAPI array constant(TYPE val, const dim_t d0, const dtype ty=TY);  \
    AFAPI array constant(TYPE val, const dim_t d0,                      \
                         const dim_t d1, const dtype ty=TY);            \
    AFAPI array constant(TYPE val, const dim_t d0,                      \
                         const dim_t d1, const dim_t d2,                \
                         const dtype ty=TY);                            \
    AFAPI array constant(TYPE val, const dim_t d0,                      \
                         const dim_t d1, const dim_t d2,                \
                         const dim_t d3, const dtype ty=TY);            \

    CONSTANT(double             , f32)
    CONSTANT(float              , f32)
    CONSTANT(int                , f32)
    CONSTANT(unsigned           , f32)
    CONSTANT(char               , f32)
    CONSTANT(unsigned char      , f32)
    CONSTANT(cfloat             , c32)
    CONSTANT(cdouble            , c64)
    CONSTANT(long               , s64)
    CONSTANT(unsigned long      , u64)
    CONSTANT(long long          , s64)
    CONSTANT(unsigned long long , u64)
    CONSTANT(bool               ,  b8)

#undef CONSTANT

    /**
       @}
    */

    /**
        \param[in] dims is the dimensions of the array to be generated
        \param[in] ty is the type of the array

        \return array of size \p dims

        \ingroup data_func_randu
    */
    AFAPI array randu(const dim4 &dims, const dtype ty=f32);

    /**
        \param[in] d0 is the size of the first dimension
        \param[in] ty is the type of the array

        \return array of size \p d0

        \ingroup data_func_randu
    */
    AFAPI array randu(const dim_t d0, const dtype ty=f32);

    /**
        \param[in] d0 is the size of the first dimension
        \param[in] d1 is the size of the second dimension
        \param[in] ty is the type of the array

        \return array of size \p d0 x \p d1

        \ingroup data_func_randu
    */
    AFAPI array randu(const dim_t d0,
                      const dim_t d1, const dtype ty=f32);

    /**
        \param[in] d0 is the size of the first dimension
        \param[in] d1 is the size of the second dimension
        \param[in] d2 is the size of the third dimension
        \param[in] ty is the type of the array

        \return array of size \p d0 x \p d1 x \p d2

        \ingroup data_func_randu
    */
    AFAPI array randu(const dim_t d0,
                      const dim_t d1, const dim_t d2, const dtype ty=f32);

    /**
        \param[in] d0 is the size of the first dimension
        \param[in] d1 is the size of the second dimension
        \param[in] d2 is the size of the third dimension
        \param[in] d3 is the size of the fourth dimension
        \param[in] ty is the type of the array

        \return array of size \p d0 x \p d1 x \p d2 x \p d3

        \ingroup data_func_randu
    */
    AFAPI array randu(const dim_t d0,
                      const dim_t d1, const dim_t d2,
                      const dim_t d3, const dtype ty=f32);

    /**
        \param[in] dims is the dimensions of the array to be generated
        \param[in] ty is the type of the array

        \return array of size \p dims

        \ingroup data_func_randn
    */
    AFAPI array randn(const dim4 &dims, const dtype ty=f32);

    /**
        \param[in] d0 is the size of the first dimension
        \param[in] ty is the type of the array

        \return array of size \p d0

        \ingroup data_func_randn
    */
    AFAPI array randn(const dim_t d0, const dtype ty=f32);
    /**
        \param[in] d0 is the size of the first dimension
        \param[in] d1 is the size of the second dimension
        \param[in] ty is the type of the array

        \return array of size \p d0 x \p d1

        \ingroup data_func_randn
    */
    AFAPI array randn(const dim_t d0,
                      const dim_t d1, const dtype ty=f32);
    /**
        \param[in] d0 is the size of the first dimension
        \param[in] d1 is the size of the second dimension
        \param[in] d2 is the size of the third dimension
        \param[in] ty is the type of the array

        \return array of size \p d0 x \p d1 x \p d2

        \ingroup data_func_randn
    */
    AFAPI array randn(const dim_t d0,
                      const dim_t d1, const dim_t d2, const dtype ty=f32);

    /**
        \param[in] d0 is the size of the first dimension
        \param[in] d1 is the size of the second dimension
        \param[in] d2 is the size of the third dimension
        \param[in] d3 is the size of the fourth dimension
        \param[in] ty is the type of the array

        \return array of size \p d0 x \p d1 x \p d2 x \p d3

        \ingroup data_func_randn
    */
    AFAPI array randn(const dim_t d0,
                      const dim_t d1, const dim_t d2,
                      const dim_t d3, const dtype ty=f32);

    /**
        \defgroup data_func_setseed setSeed
        Set the seed for the random number generator


        \param[in] seed is a 64 bit unsigned integer

        \ingroup data_mat
        \ingroup arrayfire_func
    */
    AFAPI void setSeed(const uintl seed);

    /**
        \defgroup data_func_getseed getSeed
        Get the seed for the random number generator


        \returns seed which is a 64 bit unsigned integer

        \ingroup data_mat
        \ingroup arrayfire_func
    */
    AFAPI uintl getSeed();


    /**
        \param[in] dims is dim4 for size of all dimensions
        \param[in] ty is the type of array to generate

        \returns an identity array of specified dimension and type

        \ingroup data_func_identity
    */
    AFAPI array identity(const dim4 &dims, const dtype ty=f32);

    /**
        \param[in] d0 is size of first dimension
        \param[in] ty is the type of array to generate

        \returns an identity array of specified dimension and type

        \ingroup data_func_identity
    */
    AFAPI array identity(const dim_t d0, const dtype ty=f32);

    /**
        \param[in] d0 is size of first dimension
        \param[in] d1 is size of second dimension
        \param[in] ty is the type of array to generate

        \returns an identity array of specified dimension and type

        \ingroup data_func_identity
    */
    AFAPI array identity(const dim_t d0, const dim_t d1, const dtype ty=f32);

    /**
        \param[in] d0 is size of first dimension
        \param[in] d1 is size of second dimension
        \param[in] d2 is size of third dimension
        \param[in] ty is the type of array to generate

        \returns an identity array of specified dimension and type

        \ingroup data_func_identity
    */
    AFAPI array identity(const dim_t d0, const dim_t d1,
                         const dim_t d2, const dtype ty=f32);

    /**
        \param[in] d0 is size of first dimension
        \param[in] d1 is size of second dimension
        \param[in] d2 is size of third dimension
        \param[in] d3 is size of fourth dimension
        \param[in] ty is the type of array to generate

        \returns an identity array of specified dimension and type

        \ingroup data_func_identity
    */
    AFAPI array identity(const dim_t d0, const dim_t d1,
                         const dim_t d2, const dim_t d3, const dtype ty=f32);

    /**
        \param[in] dims is dim4 for size of all dimensions
        \param[in] seq_dim is dimesion along which [0, dim[seq_dim] - 1] is generated
        \param[in] ty is the type of array to generate

        \returns an array of integral range specified dimension and type

        \ingroup data_func_range
    */
    AFAPI array range(const dim4 &dims, const int seq_dim = -1, const dtype ty=f32);

    /**
        \param[in] d0 is size of first dimension
        \param[in] d1 is size of second dimension
        \param[in] d2 is size of third dimension
        \param[in] d3 is size of fourth dimension
        \param[in] seq_dim is dimesion along which [0, dim[seq_dim] - 1] is generated
        \param[in] ty is the type of array to generate

        \returns an array of integral range specified dimension and type

        \ingroup data_func_range
    */
    AFAPI array range(const dim_t d0, const dim_t d1 = 1, const dim_t d2 = 1,
                      const dim_t d3 = 1, const int seq_dim = -1, const dtype ty=f32);

    /**
        \param[in] dims is dim4 for unit dimensions of the sequence to be generated
        \param[in] tile_dims is dim4 for the number of repetitions of the unit dimensions
        \param[in] ty is the type of array to generate

        \returns an array of integral range specified dimension and type

        \ingroup data_func_iota
    */
    AFAPI array iota(const dim4 &dims, const dim4 &tile_dims = dim4(1), const dtype ty=f32);

    /**
        \param[in] in is the input array
        \param[in] num is the diagonal index
        \param[in] extract when true returns an array containing diagonal of tha matrix
        and when false returns a matrix with \p in as diagonal

        \returns an array with either the diagonal or the matrix based on \p extract

        \ingroup data_func_diag
    */
    AFAPI array diag(const array &in, const int num = 0, const bool extract = true);

    /**
        \brief Join 2 arrays along \p dim

        \param[in] dim is the dimension along which join occurs
        \param[in] first is the first input array
        \param[in] second is the second input array
        \return the array that joins input arrays along the given dimension

        \ingroup manip_func_join
    */
    AFAPI array join(const int dim, const array &first, const array &second);

    /**
        \brief Join 3 arrays along \p dim

        \param[in] dim is the dimension along which join occurs
        \param[in] first is the first input array
        \param[in] second is the second input array
        \param[in] third is the third input array
        \return the array that joins input arrays along the given dimension

        \ingroup manip_func_join
    */
    AFAPI array join(const int dim, const array &first, const array &second, const array &third);

    /**
        \brief Join 4 arrays along \p dim

        \param[in] dim is the dimension along which join occurs
        \param[in] first is the first input array
        \param[in] second is the second input array
        \param[in] third is the third input array
        \param[in] fourth is the fourth input array
        \return the array that joins input arrays along the given dimension

        \ingroup manip_func_join
    */
    AFAPI array join(const int dim, const array &first, const array &second,
                     const array &third, const array &fourth);

    /**
        \param[in] in is the input array
        \param[in] x is the number of times \p in is tiled along first dimension
        \param[in] y is the number of times \p in is tiled along second dimension
        \param[in] z is the number of times \p in is tiled along third dimension
        \param[in] w is the number of times \p in is tiled along fourth dimension
        \return the tiled output

        \ingroup manip_func_tile
    */
    AFAPI array tile(const array &in, const unsigned x, const unsigned y=1,
                     const unsigned z=1, const unsigned w=1);

    /**
        \param[in] in is the input array
        \param[in] dims dim4 of tile dimensions
        \return the tiled output

        \ingroup manip_func_tile
    */
    AFAPI array tile(const array &in, const dim4 &dims);

    /**
        \param[in] in is the input array
        \param[in] x specifies which dimension should be first
        \param[in] y specifies which dimension should be second
        \param[in] z specifies which dimension should be third
        \param[in] w specifies which dimension should be fourth
        \return the reordered output

        \ingroup manip_func_reorder
    */
    AFAPI array reorder(const array& in, const unsigned x,
                        const unsigned y=1, const unsigned z=2, const unsigned w=3);

    /**
        \param[in] in is the input array
        \param[in] x specifies the shift along first dimension
        \param[in] y specifies the shift along second dimension
        \param[in] z specifies the shift along third dimension
        \param[in] w specifies the shift along fourth dimension

        \return the shifted output

        \ingroup manip_func_shift
    */
    AFAPI array shift(const array& in, const int x, const int y=0, const int z=0, const int w=0);

    /**
        \param[in] in is the input array
        \param[in] ndims is the number of dimensions
        \param[in] dims is the array containing the new dimensions
        \return the modded output

        \ingroup manip_func_moddims
    */
    AFAPI array moddims(const array& in, const unsigned ndims, const dim_t * const dims);

    /**
        \param[in] in is the input array
        \param[in] dims is the new dimensions
        \return the modded output

        \ingroup manip_func_moddims
    */
    AFAPI array moddims(const array& in, const dim4& dims);

    /**
        \param[in] in is the input array
        \param[in] d0 specifies the new size of the first dimension
        \param[in] d1 specifies the new size of the second dimension
        \param[in] d2 specifies the new size of the third dimension
        \param[in] d3 specifies the new size of the fourth dimension
        \return the modded array

        \ingroup manip_func_moddims
    */
    AFAPI array moddims(const array& in, const dim_t d0, const dim_t d1=1, const dim_t d2=1, const dim_t d3=1);

    /**
        \param[in] in is the input array
        \return the flat array

        \ingroup manip_func_flat
    */
    AFAPI array flat(const array &in);

    /**
        \param[in] in is the input array
        \param[in] dim is the dimensions to flip the array
        \return the flipped array

        \ingroup manip_func_flip
    */
    AFAPI array flip(const array &in, const unsigned dim);

    /**
        \param[in] in is the input matrix
        \param[in] is_unit_diag is a boolean parameter specifying if the diagonal elements should be 1
        \return the lower triangle array

        \ingroup data_func_lower
    */
    AFAPI array lower(const array &in, bool is_unit_diag=false);

    /**
        \param[in] in is the input matrix
        \param[in] is_unit_diag is a boolean parameter specifying if the diagonal elements should be 1
        \return the upper triangle matrix

        \ingroup data_func_upper
    */
    AFAPI array upper(const array &in, bool is_unit_diag=false);

    /**
      @}
    */
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

    /**
       \defgroup data_func_constant constant
       Create constant array from the specified dimensions
       @{

       \ingroup arrayfire_func
       \ingroup data_mat
    */
    AFAPI af_err af_constant(af_array *arr, const double val, const unsigned ndims, const dim_t * const dims, const af_dtype type);

    AFAPI af_err af_constant_complex(af_array *arr, const double real, const double imag,
                                     const unsigned ndims, const dim_t * const dims, const af_dtype type);

    AFAPI af_err af_constant_long (af_array *arr, const  intl val, const unsigned ndims, const dim_t * const dims);

    AFAPI af_err af_constant_ulong(af_array *arr, const uintl val, const unsigned ndims, const dim_t * const dims);
    /**
       @}
    */

    /**
        \param[out] out is the generated array
        \param[in] ndims is size of dimension array \p dims
        \param[in] dims is the array containing sizes of the dimension
        \param[in] seq_dim is dimension along which [0, dim[seq_dim] - 1] is generated
        \param[in] type is the type of array to generate

        \ingroup data_func_range
    */
    AFAPI af_err af_range(af_array *out, const unsigned ndims, const dim_t * const dims,
                          const int seq_dim, const af_dtype type);

    /**
        \param[out] out is the generated array
        \param[in] ndims is size of dimension array \p dims
        \param[in] dims is the array containing sizes of the dimension
        \param[in] t_ndims is size of tile array \p tdims
        \param[in] tdims is array containing the number of repetitions of the unit dimensions
        \param[in] type is the type of array to generate

        \ingroup data_func_iota
    */
    AFAPI af_err af_iota(af_array *out, const unsigned ndims, const dim_t * const dims,
                         const unsigned t_ndims, const dim_t * const tdims, const af_dtype type);

    /**
        \param[out] out is the generated array
        \param[in] ndims is size of dimension array \p dims
        \param[in] dims is the array containing sizes of the dimension
        \param[in] type is the type of array to generate

       \ingroup data_func_randu
    */
    AFAPI af_err af_randu(af_array *out, const unsigned ndims, const dim_t * const dims, const af_dtype type);

    /**
        \param[out] out is the generated array
        \param[in] ndims is size of dimension array \p dims
        \param[in] dims is the array containing sizes of the dimension
        \param[in] type is the type of array to generate

       \ingroup data_func_randn
    */
    AFAPI af_err af_randn(af_array *out, const unsigned ndims, const dim_t * const dims, const af_dtype type);

    /**
        \defgroup data_func_setseed setSeed
        Set the seed for the random number generator


        \param[in] seed is a 64 bit unsigned integer

        \ingroup data_mat
        \ingroup arrayfire_func
    */
    AFAPI af_err af_set_seed(const uintl seed);

    /**
        \defgroup data_func_getseed getSeed
        Get the seed for the random number generator


        \param[out] seed which is a 64 bit unsigned integer

        \ingroup data_mat
        \ingroup arrayfire_func
    */
    AFAPI af_err af_get_seed(uintl *seed);


    /**
        \param[out] out is the generated array
        \param[in] ndims is size of dimension array \p dims
        \param[in] dims is the array containing sizes of the dimension
        \param[in] type is the type of array to generate

        \ingroup data_func_identity
    */
    AFAPI af_err af_identity(af_array *out, const unsigned ndims, const dim_t * const dims, const af_dtype type);

    /**
        \param[out] out is the array created from the input array \p in
        \param[in] in is the input array which is the diagonal
        \param[in] num is the diagonal index

        \ingroup data_func_diag
    */
    AFAPI af_err af_diag_create(af_array *out, const af_array in, const int num);

    /**
        \param[out] out is the \p num -th diagonal of \p in
        \param[in] in is the input matrix
        \param[in] num is the diagonal index

        \ingroup data_func_diag
    */
    AFAPI af_err af_diag_extract(af_array *out, const af_array in, const int num);

    /**
        \brief Join 2 arrays along \p dim

        \param[out] out is the generated array
        \param[in] dim is the dimension along which join occurs
        \param[in] first is the first input array
        \param[in] second is the second input array

        \ingroup manip_func_join
    */
    AFAPI af_err af_join(af_array *out, const int dim, const af_array first, const af_array second);

    /**
        \brief Join many arrays along \p dim

        Current limit is set to 10 arrays.

        \param[out] out is the generated array
        \param[in] dim is the dimension along which join occurs
        \param[in] n_arrays number of arrays to join
        \param[in] inputs is an array of af_arrays containing handles to the arrays to be joined

        \ingroup manip_func_join
    */
    AFAPI af_err af_join_many(af_array *out, const int dim, const unsigned n_arrays, const af_array *inputs);

    /**
        \param[out] out is the generated array
        \param[in] in is the input matrix
        \param[in] x is the number of times \p in is tiled along first dimension
        \param[in] y is the number of times \p in is tiled along second dimension
        \param[in] z is the number of times \p in is tiled along third dimension
        \param[in] w is the number of times \p in is tiled along fourth dimension

        \ingroup manip_func_tile
    */
    AFAPI af_err af_tile(af_array *out, const af_array in,
                         const unsigned x, const unsigned y, const unsigned z, const unsigned w);

    /**
        \param[out] out is the reordered array
        \param[in] in is the input matrix
        \param[in] x specifies which dimension should be first
        \param[in] y specifies which dimension should be second
        \param[in] z specifies which dimension should be third
        \param[in] w specifies which dimension should be fourth

        \ingroup manip_func_reorder
    */
    AFAPI af_err af_reorder(af_array *out, const af_array in,
                            const unsigned x, const unsigned y, const unsigned z, const unsigned w);

    /**
        \param[in] out is the shifted array
        \param[in] in is the input array
        \param[in] x specifies the shift along first dimension
        \param[in] y specifies the shift along second dimension
        \param[in] z specifies the shift along third dimension
        \param[in] w specifies the shift along fourth dimension

        \ingroup manip_func_shift
    */
    AFAPI af_err af_shift(af_array *out, const af_array in, const int x, const int y, const int z, const int w);

    /**
        \param[out] out is the modded array
        \param[in] in is the input array
        \param[in] ndims is the number of dimensions
        \param[in] dims is the array containing the new dimensions

        \ingroup manip_func_moddims
    */
    AFAPI af_err af_moddims(af_array *out, const af_array in, const unsigned ndims, const dim_t * const dims);

    /**
        \param[out] out is the flat array
        \param[in] in is the input array

        \ingroup manip_func_flat
    */
    AFAPI af_err af_flat(af_array *out, const af_array in);

    /**
        \param[out] out is the flipped array
        \param[in] in is the input array
        \param[in] dim is the dimensions to flip the array

        \ingroup manip_func_flip
    */
    AFAPI af_err af_flip(af_array *out, const af_array in, const unsigned dim);

    /**
        \param[out] out is the lower traingle matrix
        \param[in] in is the input matrix
        \param[in] is_unit_diag is a boolean parameter specifying if the diagonal elements should be 1

        \ingroup data_func_lower
    */
    AFAPI af_err af_lower(af_array *out, const af_array in, bool is_unit_diag);

    /**
        \param[out] out is the upper triangle matrix
        \param[in] in is the input matrix
        \param[in] is_unit_diag is a boolean parameter specifying if the diagonal elements should be 1

        \ingroup data_func_upper
    */
    AFAPI af_err af_upper(af_array *out, const af_array in, bool is_unit_diag);
    /**
      @}
    */
#ifdef __cplusplus
}
#endif
