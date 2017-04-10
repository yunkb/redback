/****************************************************************/
<<<<<<< HEAD
/*               DO NOT MODIFY THIS HEADER                      */
/*     REDBACK - Rock mEchanics with Dissipative feedBACKs      */
/*                                                              */
/*              (c) 2014 CSIRO and UNSW Australia               */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*            Prepared by CSIRO and UNSW Australia              */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
=======
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*          All contents are licensed under LGPL V2.1           */
/*             See LICENSE for full restrictions                */
>>>>>>> da204f3f3206b0f018480903d29fbef04c416551
/****************************************************************/
#ifndef JINTEGRAL_H
#define JINTEGRAL_H

#include "ElementIntegralPostprocessor.h"
#include "CrackFrontDefinition.h"
<<<<<<< HEAD
#include "RankTwoTensor.h"
=======
>>>>>>> da204f3f3206b0f018480903d29fbef04c416551

//Forward Declarations
class JIntegral;

template<>
InputParameters validParams<JIntegral>();

/**
 * This postprocessor computes the J-Integral
 *
 */
class JIntegral: public ElementIntegralPostprocessor
{
public:
  JIntegral(const InputParameters & parameters);
  virtual Real getValue();

protected:
  virtual void initialSetup();
  virtual Real computeQpIntegral();
  const VariableValue & _scalar_q;
  /// The gradient of the scalar q field
  const VariableGradient & _grad_of_scalar_q;
  const CrackFrontDefinition * const _crack_front_definition;
  bool _has_crack_front_point_index;
  const unsigned int _crack_front_point_index;
  bool _treat_as_2d;
<<<<<<< HEAD
  const MaterialProperty<RankTwoTensor> & _Eshelby_tensor;
  // const MaterialProperty<RealVectorValue> * _J_thermal_term_vec;
=======
  const MaterialProperty<ColumnMajorMatrix> & _Eshelby_tensor;
  const MaterialProperty<RealVectorValue> * _J_thermal_term_vec;
>>>>>>> da204f3f3206b0f018480903d29fbef04c416551
  bool _convert_J_to_K;
  bool _has_symmetry_plane;
  Real _poissons_ratio;
  Real _youngs_modulus;
};

#endif //JINTEGRAL3D_H