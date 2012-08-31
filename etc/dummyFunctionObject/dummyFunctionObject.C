/*---------------------------------------------------------------------------*\
License
    This file is NOT part of OpenFOAM, but is heavily based on it's code.
    OpenFOAM official website: www.openfoam.org

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "dummyFunctionObject.H"

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{
    defineNamedTemplateTypeNameAndDebug
    (
        dummyFunctionObject,
        0
    );

    addToRunTimeSelectionTable
    (
        functionObject,
        dummyFunctionObject,
        dictionary
    );
}

// ************************************************************************* //
