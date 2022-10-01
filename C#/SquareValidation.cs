using System;

namespace Validations
{
    public static class SquareValidation
    {
        /// <summary>
        /// Checks if given number is square root of it self
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public static bool IsSquare(double value)
        {
            if (0 > value) => return false;

            var squareRoot = Math.Sqrt(value);
            return (value == squareRoot * squareRoot);
        }
    }
}