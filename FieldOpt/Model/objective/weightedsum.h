/******************************************************************************
 *
 * weightedsum.h
 *
 * Created: 07.10.2015 2015 by einar
 *
 * This file is part of the FieldOpt project.
 *
 * Copyright (C) 2015-2015 Einar J.M. Baumann <einar.baumann@ntnu.no>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *****************************************************************************/

#ifndef WEIGHTEDSUM_H
#define WEIGHTEDSUM_H

#include "objective.h"
#include "Utilities/settings/model.h"

namespace Model {
namespace Objective {

/*!
 * \brief The WightedSum class defines the objectuve function for the optimization
 * on the following form for \f$ n \f$ components:
 * \f[
 *      f = \sum_{i=0}^{n} \gamma_i \times k_i
 * \f]
 * where \f$\gamma_i\f$ is some factor \f$ \left< -\infty, \infty \right> \f$, for example 1 or -1,
 * and \f$ k \f$ is some keyword defining either a property in the simulator summary or some predefined
 * compound expression. Both \f$ \gamma \f$ and \f$ k \f$ must be defined for all components of the
 * objective function.
 *
 * Example:
 * \f[
 *      f = 1.0 \times CUMOIL - 0.9 \times CUMWAT
 * \f]
 * where \f$ CUMOIL \f$ \f$ CUMWAT \f$ are the keywords for the cumulative oil production and cumulative
 * water production in the summary, respectively.
 */
class WeightedSum : public Objective
{
public:
    WeightedSum(Utilities::Settings::Optimizer settings);

private:
    QList<QPair<double, double>> components_; //!< List of gamma, k pairs.
};

}
}

#endif // WEIGHTEDSUM_H
