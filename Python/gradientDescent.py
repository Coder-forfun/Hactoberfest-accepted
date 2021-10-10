import math
import numpy as np
import matplotlib.pyplot as plt

def gradDescent(grad, x, parameters, residual, lr):
    return np.matmul(-lr * grad(x, *parameters[0]), residual).transpose()

def gaussNewton(grad, x, parameters, residual, lr):
    J = grad(x, *parameters[0])
    a = np.linalg.inv(np.matmul(J, J.transpose()))
    return np.matmul(a, np.matmul(-J, residual)).transpose()

def LM(grad, x, parameters, residual, lr):
    J = grad(x, *parameters[0])
    a = np.matmul(J, J.transpose()) + lr * np.identity(np.shape(J)[0])
    return np.matmul(np.linalg.inv(a), np.matmul(-J, residual)).transpose()

def optimize(obj, grad, x, y, updateFunc=gradDescent, pltTitle='Gradient Descent', init=[10, 13, 19.12], lr=0.01, tolerance=1e-5, iterNum=200):
    parameters = np.reshape(init, (1, -1))
    lastIter = iterNum
    lossHis = []

    for i in range(iterNum):
        residual = np.reshape(obj(x, *parameters[0]), (-1, 1)) - np.reshape(y, (-1, 1))
        lossHis.append(np.sum(abs(residual)))
        if np.max(abs(residual)) < tolerance:
            lastIter = i + 1
            break

        parameters += updateFunc(grad, x, parameters, residual, lr)

    plt.figure()
    plt.plot(range(lastIter), lossHis)
    plt.title('Loss vs Number of Iterations for ' + pltTitle)
    return parameters[0]

def gaussian_grad(x, a, mean, std):
    Ja = np.exp(-(x - mean) ** 2 / (2 * std ** 2))
    Jm = a * (x - mean) * np.exp(-(x - mean) ** 2 / (2 * std ** 2)) / (std ** 2)
    Js = a * ((x - mean) ** 2) * np.exp(-(x - mean) ** 2 / (2 * std ** 2)) / (std ** 3)
    return np.vstack((Ja, Jm, Js))

def make_gaussian(x, a, mean, std):
    y = a * np.exp(-(x-mean)**2/(2*std**2))
    return y

gt = [10, 0, 20]
obsNum = 50
x = np.linspace(-25, 25, obsNum)
y = make_gaussian(x, *gt)
predsGD = make_gaussian(x, *optimize(make_gaussian, gaussian_grad, x, y))
predsGN = make_gaussian(x, *optimize(make_gaussian, gaussian_grad, x, y, gaussNewton, 'Gauss-Newton'))
predsLM = make_gaussian(x, *optimize(make_gaussian, gaussian_grad, x, y, LM, 'LM', lr=1))

plt.figure()
plt.plot(x, y, '-o', label='Ground Truth')
plt.plot(x, predsGD, '-o', label='Gradient Descent')
plt.plot(x, predsGN, '-o', label='Gauss-Newton')
plt.plot(x, predsLM, '-o', label='LM')
plt.title('Predicted vs GT Gaussians by Gradient Descent')
plt.legend()
plt.show()
