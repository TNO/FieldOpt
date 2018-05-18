/******************************************************************************
 * This file is part of the FieldOpt project.
 *
 * Copyright (C) 2015-2018 Einar J.M. Baumann <einar.baumann@ntnu.no>
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

#include "tubing.h"

namespace Model {
namespace Wells {
namespace Wellbore {
namespace Completions {

Tubing::Tubing(const Settings::Model::Well::Completion &completion_settings,
               Properties::VariablePropertyContainer *variable_container) : SegmentedCompletion(completion_settings,
                                                                                                variable_container) {}
}
}
}
}
