/******************************************************************************
 *
 *
 *
 * Created: 16.10.2015 2015 by einar
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

#ifndef ECLSIMULATOR_H
#define ECLSIMULATOR_H

#include "simulator.h"
#include "Model/model.h"
#include <QStringList>

namespace Simulation {
namespace SimulatorInterfaces {


/*!
 * \brief The ECLSimulator class implements simulation of models using the ECLIPSE reservoir simulator.
 *
 * This class should not be used directly except for instantiation. All other actions should be
 * called through the Simulator class. The intended use is as follows:
 *
 * \code
 *  Simulator sim = new ECLSimulator();
 *  sim.SetOutputDirectory("some/path");
 *  sim.Evaluate();
 *  sim.CleanUp();
 * \endcode
 *
 * \todo Support other execution scripts (i.e. get it from settings)
 */
class ECLSimulator : public Simulator
{
public:
    ECLSimulator(Utilities::Settings::Settings *settings, Model::Model *model);
    void Evaluate();
    void CleanUp();

private:
    void writeDriverFile();
    Utilities::Settings::Settings *settings_;
    Model::Model *model_;
    QStringList *original_driver_file_contents_; //!< The content of the original (input) driver file.
    QString output_driver_file_name_; //!< Path to the driver file to be written.
};

}
}
#endif // ECLSIMULATOR_H
